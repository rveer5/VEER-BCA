#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter a number :";
    cin>>n;

    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    cout<<"factorial is : "<<fact;
}