#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int del;
    cout<<"enter the element you want to delete .";
    cin>>del;
    int size=sizeof(arr)/sizeof(int);
    int index=size;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==del)
        {
            index=i;
            break;
        }
    }
    if(index==size)
    {
        cout<<"No element found .";
        return 0;
    }
    for(int j=index;j<size-1;j++)
    {
        arr[j]=arr[j+1];

    }
    for(int k=0;k<size-1;k++)
    {
        cout<<arr[k]<<" ";
    }
}