#include<iostream>
using namespace std;
class Person
{
	private:
	string name;
	string address;
	int age;	
	public: void getData()
	{
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter your age: "<<endl;
		cin>>age;
		cout<<"Enter your address: "<<endl;
		cin>>address;
	}
	public: void displayData()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Address: "<<address<<endl;
	}
};
class Employee: public Person
{
	public:
	int id;
	int salary;
	public: void getData1()
	{
		cout<<"Enter your id: "<<endl;
		cin>>id;
		cout<<"Enter your salary: "<<endl;
		cin>>salary;
	}
	public: void displayData1()
	{
		cout<<"Id: "<<id<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	Employee emp;
	emp.getData();
	emp.getData1();
	emp.displayData(); 
	emp.displayData1(); 
	return 0;
}
