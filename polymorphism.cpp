#include<iostream>
using namespace std;
class car
{
	public:
	virtual	void start()=0;
	//	{
	//		cout<<"car started\n";
	//	}
};
class innova:public car
{
	public:
	virtual	void start()
		{
			cout<<"innova started\n";
		}
};
class swift:public car
{
	public:
		void start()
		{
			cout<<"swift started\n";
		}
};
int main()
{
	car *ptr=new innova;
	ptr->start();
	ptr=new swift;
	ptr->start();
}

