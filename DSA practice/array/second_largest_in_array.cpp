#include<iostream>
using namespace std;
int main()
{

    int arr[]={200,550,66,77};
    int n=sizeof(arr)/sizeof(int);
    int max1=arr[0];
    int i;
    int index=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
            index=i;
        }
    }


    int max2=0 ;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=max1)
        {
            if(arr[j]>max2)
            {
                max2=arr[j];

            }

            
        }
        
    }
    cout<<max2;
    
    
}