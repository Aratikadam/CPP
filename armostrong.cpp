#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0;
 	cout<<"Enter the no.= ";
 	cin>>a;
 	c=a;
 	while(a>0)
 	{
  		b=a%10;
  		sum=(b*b*b)+sum;
  		a=a/10;
 	}
 	if(c==sum)
 	{
  		cout<<"\nArmostrong no.";
 	}
 	else
 	{
  		cout<<"Not Armostrong no.";
 	}
 	return 0;
}
