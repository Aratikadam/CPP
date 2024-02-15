#include<iostream>
using namespace std;
int main()
{
 int mar,eng,hindi,total;
 float per;
 cout<<"Enter the marks for 3 subjects=\n";
 cin>>mar>>eng>>hindi;
 total=mar+eng+hindi;
 cout<<"\nTotal="<<total;
 per=total/3;
 cout<<"\nPercentage="<<per;
 return 0;
}
