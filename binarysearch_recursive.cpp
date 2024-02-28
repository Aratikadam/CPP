#include<iostream>
#include<time.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = (l + r)/2;
		if (arr[mid] == x)
	    return mid;
	else if (arr[mid] > x)
		return binarySearch(arr, l, mid-1, x);
	else
		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main()
{
	int l, r, p,i, key;
	l = 0;
	time_t t1,t2;
    cout<<"enter size of array=";
    cin>>r;
	int ar[r];
    cout<<"enter the element=";
    time(&t1);
    for(i=0;i<r;i++)
    { 
		cin>>ar[i];
    }
    cout<<"enter element to search=";
    cin>>key;

	int result = binarySearch(ar, 0, r-1, key);
	
 	if(result == -1)
		cout<<"Element is not present in array\n"<<endl;
	else
 		cout<<"Element is present at index "<< result<<endl;
 	
	time(&t2);
	cout<<"Time: "<<difftime(t2,t1);
	return 0;
}
