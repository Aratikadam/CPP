#include<iostream>
using namespace std;
int main()
{
 int no1,i,max=0;
 for(i=1;i<=3;i++)
 {
  cout<<"Enter any no.= ";
  cin>>no1;
  if(max<no1)
  {
   max=no1;
  }
 }
 cout<<"Max no.= "<<max;
 return 0;
}
