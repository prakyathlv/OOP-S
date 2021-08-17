#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	public:
		rectangle();
		rectangle(int,int);
		rectangle(rectangle &R);
		void setLength(int);
		void setBreadth(int);
		int getLength();
		int getBreadth();
		int area();
		int perimeter();
		bool isSquare();
		~rectangle();
};
int main()
{
	rectangle r;
	cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
	cout<<r.area()<<" "<<r.perimeter()<<endl;
	r.setLength(10);
	r.setBreadth(20);
	cout<<"\n\n";
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    cout<<"\n\n\n";
	rectangle r1(30,40);	
	cout<<r1.area()<<" "<<r1.perimeter()<<endl;
	cout<<"\n\n";
	rectangle r2(r);
	cout<<r.area()<<" "<<r.perimeter()<<endl;
	if(r2.isSquare())
	cout<<"yes"<<endl; 		
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
void rectangle::setLength(int l)
{
	length=l;
}
void rectangle::setBreadth(int b)
{
	breadth=b;
}
int rectangle::getLength()
{
	return length;
}
int rectangle::getBreadth()
{
    return breadth;
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
	return length=breadth;
}
rectangle::~rectangle()
{
	cout<<"rectangle is destroyed";
}

