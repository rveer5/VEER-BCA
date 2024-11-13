#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,1,7,4,8,7,6,10};  // 9,3,5,2,2,9,2,6,7,0
    int arr2[]={2,3,1,7,4,8,7,6,10};
    int size=sizeof(arr)/sizeof(int);
    for(int i =0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }

}