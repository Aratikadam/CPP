#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter the values for a and b=\n";
 cin>>a>>b;
 cout<<"Before swapping=\na="<<a<<"\nb="<<b;
 c=a;
 a=b;
 b=c;
 cout<<"\nAfter swapping=\na="<<a<<"\nb="<<b;
 return 0;
}
