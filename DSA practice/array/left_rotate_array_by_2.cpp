#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int temp=arr[0];
    int temp2=arr[1];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+2];

    }
    arr[n-1]=temp2;
    arr[n-2]=temp;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}