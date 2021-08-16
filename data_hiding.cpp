#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	public:
		void setLength(int l)
		{
			if(l>0)
			length=l;
			else
			length=1;
		}
		void setBreadth(int b)
		{
			if(b>0)
			breadth=b;
			else
			breadth=1;
		}
		int getBreadth()
		{
			return breadth;
		}
		int getLength()
		{
			return length;
		}
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
};
int main()
{
	rectangle r;
	cout<<r.getLength()<<endl;
	r.setLength(10);
	r.setLength(5);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
}
