#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,78,10,7,150};
    int n=sizeof(arr)/sizeof(int);
    
    int max=arr[0];
    int i;
    int index;
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    cout<<index;


    
}    