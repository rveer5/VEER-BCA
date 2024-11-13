// You are given an array containing n-1 distinct numbers taken from the range 1 to n.
// This means that one number from the range is missing. The task is to find the missing number.
// This solution works only for sorted array.
// Can also works for unsorted array . but the method is a little bit tricky , i had not tried it .


// Example:
// Input: [1, 2, 4, 5, 6]
// Output: 3

// solution = sum of first n natural number - sum of elements present in the array.= Missing value.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,7};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(int);
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];                         // finding largest number to calculate the sum of first n natural number .
        }
    }
    int num=0;
    num=max;
    // sum of first n natural number .
    int sum=num*(num+1)/2;
    int total=0;
    for(int i=0;i<size;i++)
    {
        total = total +arr[i];               // sum of elements present in the array .

        

    }
    cout<<"\n"<<"Missing value is : ";
    cout<<sum-total;




}