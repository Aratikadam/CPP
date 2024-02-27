#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter the no.= ";
 cin>>a;
 for(;a>0;)
 {
  b=a%10;
  cout<<b;
  a=a/10;
 }
 return 0;
}
