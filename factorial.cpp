#include<iostream>
using namespace std;
int main()
{
 long int a,b,fact=1;
 cout<<"Enter any no.= ";
 cin>>a;
 for(b=a;b>=1;b--)
 {
  fact=fact*b;
  cout<<"\n"<<fact;
 }
 return 0;
}
