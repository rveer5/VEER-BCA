#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={45,78,555,23,67,9};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,arr+size);                         // built in algorithm to sort array 
    {
        for(int i=0;i<6;i++)
        {
            cout<<arr[i]<<"  ";
        }

    }
    cout<<endl;
    if(binary_search(arr,arr+6,23))           // built in algorithm for binary search .
    {
        cout<<"Element found .";
    }
    else
    {
        cout<<"Element not found .";
    }
}