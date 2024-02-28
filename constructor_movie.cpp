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
		cout<<"Movie Name: "<<movie_name<<endl;
		total_price=(adult_ticket_price*no_adult_ticket)+(child_ticket_price*no_child_ticket);
		cout<<"Total amount: "<<total_price<<endl;
		gross_amount=(total_price/100)*gross_percentage;
		cout<<"Donated amount: "<<gross_amount<<endl;
		net_amount=total_price-gross_amount;
		cout<<"Net amount: "<<net_amount<<endl<<endl;
		return 0;
	}	
	Movie()
	{
		movie_name="Arati";
		adult_ticket_price=200;
		child_ticket_price=150;
		no_adult_ticket=20;
		no_child_ticket=20;
		gross_percentage=5;
	}
	Movie(int no_adult,int no_child,int gross_p)
	{
		movie_name="Taqdeer";
  		adult_ticket_price=100;
		child_ticket_price=80;
		no_adult_ticket=no_adult;
		no_child_ticket=no_child;
		gross_percentage=gross_p;	
	}
};
int main()
{
	Movie m1;
	m1.getData();
	
	Movie m2(50,30,5);
	m2.getData();
}
