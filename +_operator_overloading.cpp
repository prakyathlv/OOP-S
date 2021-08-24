#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		int getreal()
		{
			cout<<real;
		}
		void setreal(int r)
		{
			real=r;
		}
		int getimg()
		{
			cout<<img;
		}
		void setimg(int i)
		{
			img=i;
		}
		friend void operator+(complex c1,complex c2);
};
void operator+(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	cout<<temp.real<<"+i"<<temp.img;
}
int main()
{
	int r,i;
	complex c1(1,2),c2(1,2),c3;
	c1+c2;
}

