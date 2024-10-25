// find the kth smallest element in the given array.

// solution using sorting the array . not good if compare to quick select algorithm but it is easy to do.
// implementation .

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int smallest(vector<int>&arr,int k)                 // always use call by reference or call by address to actually modify the data.
{                                                   // and get the desired result .
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in the array: "<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the kth number  :"<<endl;
    int k;
    cin>>k;
    cout<<"The "<<k<<" smallest number is : "<<smallest(arr,k);
    return 0;




}