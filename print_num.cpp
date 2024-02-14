#include<iostream>
using namespace std;
int main()
{
	int start,end,i;
	cout<<"Enter starting number: ";
	cin>>start;
	cout<<"Enter ending number: ";
	cin>>end;
	if(start<=end)
	{
		for(i=start;i<=end;i++)
		{
			cout<<i<<endl;
		}
	}
	else
	{
		cout<<"Start value must be less or equal than ending value"<<endl;
	}
	
	return 0;
}
