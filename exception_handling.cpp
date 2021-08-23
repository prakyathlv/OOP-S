#include<iostream>
using namespace std;
int main()
{
	int a=10,b=0,c;
	try
	{
	if(b==0)
	throw 404;
	c=a/b;
	cout<<c<<endl;
	}
	catch(int e)
	{
		cout<<"divion by zero "<<e<<endl;
	}
    cout<<"done\n";
    return 0;
}
