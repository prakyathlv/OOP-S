#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
	public:
		complex(int r=0,int i=0)
		{
			real=0;
			img=0;
		}
		friend complex operator+(complex c1,complex c2);
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
};
int main()
{
	complex c1(4,5),c2(8,3),c3;
	c3=c1+c2;
	c3.display();
}
complex operator+(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
