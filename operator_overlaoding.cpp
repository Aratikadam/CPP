#include<iostream>
#include<string>
#include<list>
using namespace std;

class Youtube_Channel
{
	public:
		string name;
		int no_of_users;
	public: Youtube_Channel(string nm,int user)
	{
		name=nm;
		no_of_users=user;	
	}
};

class MyCollection
{
	public: list<Youtube_Channel> mylist;
	void operator+=(Youtube_Channel& channel)
	{
		mylist.push_back(channel);	
	}	
};

ostream& operator<<(ostream& COUT,Youtube_Channel& channel)
{
	COUT<<channel.name<<endl;
	COUT<<channel.no_of_users<<endl;
	return COUT;
}

ostream& operator<<(ostream& COUT,MyCollection& mc)
{
	for(Youtube_Channel ytc: mc.mylist)
		cout<<ytc<<endl;
	return COUT;
}

int main()
{
	Youtube_Channel yc1("Arati",5000);
	Youtube_Channel yc2("Trupti",1000);
	MyCollection mc;
	mc+=yc1;
	mc+=yc2;
	cout<<mc;
	return 0;
}
