#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[]={1,9,2,8};
    char arr2[]={'a','b','c','d'};
    int size=sizeof(arr1)/sizeof(int);
    pair<int,char>shivay[size];
    for(int i=0;i<size;i++)
    {
        shivay[i].first=arr1[i];
        shivay[i].second=arr2[i];

    }
    sort(shivay,shivay+size);
    for(int i=0;i<size;i++)
    {
        cout<<shivay[i]<<"  ";
    }
}