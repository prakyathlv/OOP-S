#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	public:
		rectangle();
		rectangle(int l,int b);
		rectangle(rectangle &r);
		void setLength(int l);
		void setBreadth(int b);
		int getLength();
		int getBreadth();
		int area();
		int perimeter();
		bool isSquare();
		~rectangle();
	
};
class cuboid:public rectangle
{
	private:
		int height;
	public:
		cuboid(int h=0)
		{
			height=h;
		}
		void setHeight(int h)
		{
			height=h;
		}
		int getHeight()
		{
		    return height;
		}
		int volume()
		{
			return height*getLength()*getBreadth();
		}
};
int main()
{
	cuboid c(7);
	//cout<<c.getHeight()<<endl;
	c.setHeight(10);
	c.setBreadth(20);
	c.setLength(30);
	cout<<"area is "<<c.area()<<endl;
	cout<<"volume is "<<c.volume()<<endl;
	return 0;
}
rectangle::rectangle()
{
	length=1;
	breadth=1;
}
rectangle::rectangle(int l,int b)
{
	length=l;
	breadth=b;
}
rectangle::rectangle(rectangle &r)
{
	length=r.length;
	breadth=r.breadth;
}
int rectangle::getLength()
{
	return length;
}
int rectangle::getBreadth()
{
	return breadth;
}
void rectangle::setLength(int l)
{
	length=l;
}
void rectangle::setBreadth(int b)
{
	breadth=b;
}
int rectangle::area()
{
	return length*breadth;
}
int rectangle::perimeter()
{
	return 2*(length+breadth);
}
bool rectangle::isSquare()
{
	return length==breadth;
}
rectangle::~rectangle()
{
	cout<<"rectangle destroyed";
}
