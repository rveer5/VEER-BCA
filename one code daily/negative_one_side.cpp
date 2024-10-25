#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{ 
    // using sorting algorithm in vector 
    vector<int>arr={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }


    // using sorting algorithm in normal array 

    
    // int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // int n=sizeof(arr)/sizeof(int);
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"   ";
    // }
}
