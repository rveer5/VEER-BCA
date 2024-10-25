// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.don't use sort algorithm.
#include<iostream>
using namespace std;
// this solution is not the better one .
// we can use sort algorithm instead but this question need to be done without algorithm.
// Explanation = count the 0, 1 ,2 individually and print each of them respectively , the number of times they are counted.
// other methods are also available 
// this is somehow a naive solution compare to other methods which give better time complexity.
int  main()
{
    int arr[]={2,2,2,1,1,1,0,0,0};
    int size=sizeof(arr)/sizeof(int);
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else{
            c2++;
        }

    }
    for(int i=0;i<c0;i++)
    {
        cout<<"0"<<" ";
    }
     for(int i=0;i<c1;i++)
    {
        cout<<"1"<<" ";
    }
     for(int i=0;i<c2;i++)
    {
        cout<<"2"<<" ";
    }



    


}
