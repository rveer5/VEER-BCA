#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sorted(int arr[],int n)
{
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x.first<<"  "<<x.second<<"\n";
    }
}
int main()
{
    int arr[]={10,40,5,15,3};
    int size=sizeof(arr)/sizeof(int);
    sorted(arr,size);
    return 0;
}

// program to sort array and print them with their orignal index .