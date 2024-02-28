#include<iostream>
#include<string>
using namespace std;
class Movie
{
	private:
	string movie_name;
	int adult_ticket_price,child_ticket_price,no_adult_ticket,no_child_ticket,gross_percentage,total_price,gross_amount,net_amount;
	
	public: int getData()
	{
		cout<<"Enter the movie name: ";
		cin>>movie_name;
		cout<<"Enter the adult ticket price: ";
		cin>>adult_ticket_price;
		cout<<"Enter the child ticket price: ";
		cin>>child_ticket_price;
		cout<<"Enter the number of adult ticket: ";
		cin>>no_adult_ticket;
		cout<<"Enter the number of child ticket: ";
		cin>>no_child_ticket;
		cout<<"Enter the gross percentage: ";
		cin>>gross_percentage;
		return 0;
	}	
	public: int setdata()
	{
		cout<<"Movie Name: "<<movie_name<<endl;
		total_price=(adult_ticket_price*no_adult_ticket)+(child_ticket_price*no_child_ticket);
		cout<<"Total amount: "<<total_price<<endl;
		gross_amount=(total_price/100)*gross_percentage;
		cout<<"Donated amount: "<<gross_amount<<endl;
		net_amount=total_price-gross_amount;
		cout<<"Net amount: "<<net_amount<<endl<<endl;
		return 0;
	}
};
int main()
{
	Movie m1;
	m1.getData();
	m1.setdata();
}
