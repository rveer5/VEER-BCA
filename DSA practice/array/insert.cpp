#include<iostream>
using namespace std;
int main()
{
     int arr[5]={1,2,3};
    int x=8;
    int index=4;
    int cap=sizeof(arr)/sizeof(int);
    int n=3;
    // n= Elemments present in array 
    if(cap==n)
    {
        cout<<"no space available";
    }
    
    
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];            // in these we are just moving each element forward by one position . 
    }                               //  till the index is found , where we need to insert the element
    arr[index]=x;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]!=0)     // if we do not compare each element with 0 i.e zero. whole array will be printed , and by default ,
        {                      // remaining array space would be  printed that is zero i.e 0
            cout<<arr[i];

        }
        
    }
}

//  remaining array space is set to zero u can check using a loop .