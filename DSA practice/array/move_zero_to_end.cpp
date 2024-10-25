// didn't understood 

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,0,3,4,0,5,0};
    int count = 0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {   
            count++;
           
        }
        swap(arr[i],arr[count]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}