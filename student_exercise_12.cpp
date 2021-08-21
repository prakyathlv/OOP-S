#include<iostream>
using namespace std;
class shape
{
	private:
		int length;
		int breadth;
	public:
		virtual float area()=0;
		virtual float perimeter()=0;
};
class rectangle:public shape
{
	private:
		float length;
		float breadth;
	public:
		float area()
		{
			return length*breadth;
		}
		float perimeter()
		{
			return 2*(length*breadth);
		}
		void setlength(float l=0)
		{
			length=l;
		}
		void setbreadth(float b)
		{
			breadth=b;
		}
};
class circle:public shape
{
	private:
		float radius;
	public:
		float area()
		{
			return 3.14*radius*radius;
		}
		float perimeter()
		{
			return 2*3.14*radius;
		}
		void setradius(float r=0)
		{
			radius=r;
		}
};
int main()
{
	float l,b,r;
	cout<<"enter the length and breadth of rectange in float type\n ";
	cin>>l>>b;
	rectangle rec;
	rec.setlength(l);rec.setbreadth(b);
	cout<<"area of the rectangle is "<<rec.area()<<endl;
	cout<<"perimeter of the rectangle is "<<rec.perimeter()<<endl;
	cout<<"enter the radius of the circle\n";
	cin>>r;
	circle c;
	c.setradius(r);
	cout<<"area of the circle is "<<c.area()<<endl;
	cout<<"perimeter of the circle is "<<c.perimeter()<<endl;	
	
	
}

