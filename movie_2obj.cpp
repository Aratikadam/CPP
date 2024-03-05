#include<iostream>
#include<string>
using namespace std;
class Movie
{
	private:
	string movie_name;
	int adult_ticket_price,child_ticket_price,no_adult_ticket,no_child_ticket,total_price,gross_amount,gross_percentage,net_amount;
	public:
	int setData()
	{
		cout<<"Enter the Movie name: "<<endl;
		cin>>movie_name;
		cout<<"Enter the adult ticket price: "<<endl;
		cin>>adult_ticket_price;
		cout<<"Enter the child ticket price: "<<endl;
		cin>>child_ticket_price;
		cout<<"Enter the number of adult ticket: "<<endl;
		cin>>no_adult_ticket;
		cout<<"Enter the number of child ticket: "<<endl;
		cin>>no_child_ticket;
		cout<<"Enter the gross percentage: "<<endl;
		cin>>gross_percentage;
		return 0;
	}
	int getData()
	{
		total_price=(adult_ticket_price*no_adult_ticket)+(child_ticket_price*no_child_ticket);
		cout<<"Total amount: "<<total_price<<endl;
		gross_amount=(total_price/100)*gross_percentage;
		cout<<"Donated amount: "<<gross_amount<<endl;
		net_amount=total_price-gross_amount;
		cout<<"Net amount: "<<net_amount<<endl;
		return 0;
	}
};
int main()
{
	Movie m1;
	m1.setData();
	m1.getData();
	
	Movie m2;
	m2.setData();
	m2.getData();
	return 0;
}
