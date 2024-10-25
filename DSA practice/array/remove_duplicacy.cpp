// removing duplicates from a sorted array 
//  code will produce optimal result only for sorted array .

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,22,22,33,44,55,55,67,89};
    int res=1;
    int n=sizeof(arr)/sizeof(int);
    

    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }

    cout<<"Total element in array are : "<<res<<"\n";
     for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<",";
    }
    
}