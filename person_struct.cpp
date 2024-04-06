#include<iostream>
using namespace std;

struct Person{
       char name[20];
       int age;
       };

int main()
{
    struct person s;
    cout<<"Enter your name: "<<endl;
    cin>>s.name;
    struct person s;
    cout<<"Enter your age: "<<endl;
    cin>>s.age;
    cout<<"Name: "<<s.name<<"\nAge: "<<s.age;
    return 0;
}
