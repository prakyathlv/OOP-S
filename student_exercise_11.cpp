#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int id;
	public:
		employee(string name="name",int id=123)
		{
			this->name=name;
			this->id=id;
		}
		string getName()
		{
			return name;
		}
		int getId()
		{
			return id;
		}
		void getName(string name)
		{
			this->name=name;
		}
		void getId(int id)
		{
			this->id=id;
		}
};
class fulltimeEmployee:public employee
{
	private:
		int salary;
	public:
		fulltimeEmployee(string name,int id,int salary):employee(name,id)
		{
			this->salary=salary;
		}
		int getSalary()
		{
			return salary;
		}
};
class partTimeEmployee:public employee
{
	private:
		int dailywage;
	public:
		partTimeEmployee(string name,int id,int dailyWage):employee(name,id)
		{
			this->dailywage=dailyWage;
		}
		int getWage()
		{
			return dailywage;
		}
};
int main()
{
	string fname,pname;
	int fid,pid;
	int salary;
	int dailyWage;
	cout<<"enter the name of fulltime employee :\n";
	cin>>fname;
	cout<<"enter the id of fulltime employee :\n";
	cin>>fid;
	cout<<"enter the salary of fulltime employee :\n";
	cin>>salary;
    cout<<"enter the name of part time employee :\n";
	cin>>pname;
	cout<<"enter the id of part time employee :\n";
	cin>>pid;
	cout<<"enter the daily wage of part time employee :\n";
	cin>>dailyWage;
	fulltimeEmployee f(fname,fid,salary);
	//out<<f.getName()<<" id is ";//<<f.getId()<<f.getSalary<<endl;
	
	partTimeEmployee p(pname,pid,dailyWage);
	//cout<<p.getName()<<" id is ";//<<p.getId()<<" and salary is "<<p.getWage<<endl;
	//return 0;
	
	cout<<"Salary of "<<f.getName()<<" is "<<f.getSalary()<<" id is "<<f.getId()<<"\n"<<endl;
    cout<<"Daily wage of "<<p.getName()<<" is "<<p.getWage()<<"id is "<<p.getId()<<"\n"<<endl;
    return 0;
	
		
	
	
	
	
	
	
	
	
	
	
	
	
}
