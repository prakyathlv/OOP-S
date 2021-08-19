#include<iostream>
using namespace std;
class base
{
	public:
		void fun1()
		{
			cout<<"fun of rectangle\n";
		}
};
class derived:public base
{
	public:
		void fun2()
		{
			cout<<"fun of cuboid\n";
		}
};
int main()
{
	derived b;
	base *ptr=&b;
	ptr->fun1();
	//ptr->fun2();
	return 0;
	
	
	
	
	
	
	
}
