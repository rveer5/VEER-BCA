#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,7,97,14,17};
    int n=sizeof(arr)/sizeof(int);
    int max=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            max=0;
        }
        else
        {
            max=1;
            cout<<"Unsorted";

            break;

        }
    }
if(max==0)
    {
            cout<<"sorted";

    }
      
    
}// one  more method is avaialable and that is easy one 
// this method which is written here is complex .