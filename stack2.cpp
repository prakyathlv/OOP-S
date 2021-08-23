#include<iostream>
using namespace std;
template <class t>
class stack
{
	private:
		int size;
		int top;
		t *stk;
	public:
		stack(int sz)
		{
			size=sz;
			top=-1;
			stk=new t[size];
		}
		int getSize()
		{
			return size;
		}
		void push(t x);
		t pop();
};
template <class t>
void stack<t>::push(t x)
{
	if(top==(size-1))
	{
		cout<<"stack is full\n";
	}
	else
	{
		top++;
		stk[top]=x;
	}
}
template <class t>
t stack<t>::pop()
{
	t x;
	if(top==-1)
	{
		cout<<"stack is empty\n";
	}
	else
	{
		x=stk[top];
		top--;
	}
	return x;
}
int main()
{
	stack<float> s(10);
	s.push(2.3f);
	s.push(4.5f);
	cout<<s.getSize()<<endl;
	
}
