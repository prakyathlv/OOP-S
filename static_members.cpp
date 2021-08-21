#include<iostream>
using namespace std;
class student 
{
	private:
		string name;
		int rollno;
	public:
		//int rollno;
		static int addmitno;
		student(string n)
		{
			addmitno++;
			name=n;
			rollno=addmitno;
		}
		int getrollno()
		{
			return rollno;
		}
};
int student::addmitno=0;
int main()
{
	string n;
	cout<<"enter your name\n";
	cin>>n;
	student s1(n);
	cout<<n<<" "<<"roll number is "<<s1.getrollno()<<"\n";
	
	cout<<"enter your name\n";
	cin>>n;
	student s2(n);
	cout<<n<<" "<<"roll number is "<<s2.getrollno()<<"\n\n";
	//return 0;
	
	cout<<student::addmitno;//gives roll no of last student
	
}
