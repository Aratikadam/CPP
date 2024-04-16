#include<iostream>
using namespace std;
class Person
{
	protected:
	string name;
	string address;
	int age;	
};
class Employee: protected Person
{
	public:
	int id;
	int salary;
	public: void getData()
	{
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter your age: "<<endl;
		cin>>age;
		cout<<"Enter your address: "<<endl;
		cin>>address;
		cout<<"Enter your id: "<<endl;
		cin>>id;
		cout<<"Enter your salary: "<<endl;
		cin>>salary;
	}
	public: void displayData()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Id: "<<id<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	Employee emp;
	emp.getData();
	emp.displayData(); 
	return 0;
}
