#include<iostream>
using namespace std;
int main()
{
    int r,n,sum=0,c;
    cout<<"enter a number :";
    cin>>n;

    c=n;

    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(sum==c)
    cout<<"the number is palimdrome .";
    else
    cout<<"the number is not palimdrome .";

    return 0;
}