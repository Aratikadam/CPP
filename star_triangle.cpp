#include<iostream>
using namespace std;
int main()
{
 int a=1,b;
 while(a<=10)
 {
  b=1;
  while(b<=a)
  {
   cout<<" *";
   b++;
  }
  cout<<"\n";
  a++;
 }
 return 0;
}
