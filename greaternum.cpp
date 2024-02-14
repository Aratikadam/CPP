#include <iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(a>b && a>c && a>d)
        {
            return a;
        }
        else if(b>a && b>c && b>d)
        {
            return b;
        }
         else if(c>a && c>b && c>d)
        {
            return c;
        }
         else 
        {
            return d;
        }
    return 0;
}

int main() {
    int a, b, c, d;
    cout<<"Enter any 4 numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}

