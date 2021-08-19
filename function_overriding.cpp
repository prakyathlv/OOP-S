#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"display of parent\n";
		}
};
class child:public parent
{
	public:
		void display()
		{
			cout<<"display of child\n";
		}
};
int main()
{
	parent p;
	p.display();
	child c;
	c.display();
	c.parent::display();
}
