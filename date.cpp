#include<iostream>
using namespace std;
class Date
{
	private:
	int date,month,year;
	
	//default Date constructor
	public: Date()
	{
		date=5;
		month=3;
		year=2024;
		cout<<"\nCalling default constructor"<<endl;
		cout<<"Date is "<<date<<"/"<<month<<"/"<<year<<endl;
	}
	
	//parameterized Date constructor
	public: Date(int date,int month,int year)
	{
		this->date=date;
		this->month=month;
		this->year=year;
		
	}
	public: void display1()
	{
		cout<<"\nCalling parameterized constructor"<<endl;
		cout<<"Date is "<<date<<"/"<<month<<"/"<<year<<endl;
	}
	
	//User entered date
	public: void getdata()
	{
		cout<<"\nCalling getdata function"<<endl;
		cout<<"Enter the date: ";
		cin>>date;
		cout<<"Enter the month: ";
		cin>>month;
		cout<<"Enter the year: ";
		cin>>year;
	}
	public: void display2()
	{
		cout<<"\nCalling parameterized constructor"<<endl;
		cout<<"Date is "<<date<<"/"<<month<<"/"<<year<<endl;
	}
	
	
};
int main()
{
	Date d1;
	Date d2(6,4,2025);
	d2.display1();
	d2.getdata();
	d2.display2();
}
