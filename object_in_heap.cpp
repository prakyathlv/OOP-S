#include <iostream>
using namespace std;
class rectangle
{
	public:
	int length;
	int breadth;
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
	rectangle *ptr=new rectangle;
	ptr->length=10;
	ptr->breadth=20;
	cout<<ptr->area()<<"\n";
	cout<<ptr->perimeter();
	return 0;
}
