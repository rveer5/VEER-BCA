// code for binary search .
// pass the array to function using pointer ,  no parenthesis are required in function calling .
#include<iostream>
using namespace std;
int shivay(int *arr,int n,int low,int high,int target)
{
    
    while(low<=high)
    {
        int mid = (low +high)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            high=mid-1;
         
        }
         else if(arr[mid]<target)
        {
            low=mid+1;
         
        }
        return -1;
        
        


    }

}
int main()
{
    int arr[]={5,10,12,65,78,98};
    int size=sizeof(arr)/sizeof(int);
    int low = 0;
    int high = size-1;
    int target= 100;
    int result = shivay(arr,size,low,high,target);
    cout<<"Index at which element is founded: "<<result;




}