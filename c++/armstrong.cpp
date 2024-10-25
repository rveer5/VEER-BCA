#include<iostream>
using namespace std;
int main()
{
    int n,arm=0,r,c;
    cout<<"Enter a number :";
    cin>>n;

    c=n;

    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }

    if(c==arm)
    cout<<c<<" is a armstrong number .";
    else
    cout<<c<<" is not a armstrong number .";

    return 0;
}