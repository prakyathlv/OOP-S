#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"non-param of base\n";
		}
		base(int a)
		{
			cout<<"param of base "<<a<<endl;
		}	
};
class derived:public base
{
	public:
		derived()
	    {
		    cout<<"non param of derived\n";
	    }
	    derived(int x)
	    {
	    	cout<<"param of derived "<<x<<endl;
		}
	     derived(int a,int x):base(a)
	    {
	    	cout<<"param of derived "<<x<<endl;
		}
	
};
int main()
{
	derived d(10,20);
	
}
