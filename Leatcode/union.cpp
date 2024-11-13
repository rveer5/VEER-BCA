// finding union and intersection of two sorted array .
// i just finded union i.e distinct elements 

// cannot find intersection  i.e the same elements in both the array .

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    cout<<"Enter the size of array you want :  ";
    int n;
    cin>>n; 
    int arr[n];
    int arr2[n];
    cout<<endl;
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array: ";
      for(int j=0;j<n;j++)
    {
        cin>>arr2[j];
    }

    set<int>s;
    int size1=sizeof(arr)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    for(auto x:arr)
    {
        s.insert(x);
    }
     for(auto y:arr2)
    {
        s.insert(y);
    }
    vector<int>vec(s.begin(),s.end());
    cout<<endl;

    for(auto s: vec)
    {
        cout<<s<<"  ";

    }
    cout<<endl;
    cout<<"Total distinct elements are:  "<<s.size();
    
}