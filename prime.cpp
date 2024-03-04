#include<iostream>
using namespace std;
int main()
{
 	int a,i,f;
 	cout<<"Enter any no.= ";
 	cin>>a;
 	f=0;
 	for(i=2;i<=a/2;i++)
 	{
  		if(a%i==0)
  		{
   			f=1;
   			break;
  		}
 	}
 	if(f==0)
 		cout<<"Prime number";
 	else
 		cout<<"Not prime number";
 	return 0;
}
