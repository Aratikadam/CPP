#include<iostream>
using namespace std;

struct Student{
       int roll;
       float mark;
       struct p{
              char name[20];
              int age;
              };
              }s;
              
int main()
{
    struct person p;
    cout<<"Enter your name: "<<endl;
    cin>>s.p.name;
    cout<<"Enter your age: "<<endl;
    cin>>s.p.age;
    cout<<"Enter your roll no: "<<endl;
    cin>>s.roll;
    cout<<"Enter your marks: "<<endl;
    cin>>s.mark;
    cout<<"Name: "<<s.p.name<<"\nAge: "<<s.p.age<<endl;
    cout<<"Roll No.: "<<s.roll<<"\Marks: "<<s.mark;
    return 0;
}
