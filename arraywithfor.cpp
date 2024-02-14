#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[10000],i,n;
    std::cin>>n;
    if(1<=n<=1000)
    {
    for(i=0;i<n;i++)
    {
        if(1<=arr[i]<=10000)
        std::cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        std::cout<<arr[i]<<" ";
    }
    }
    return 0;
}

