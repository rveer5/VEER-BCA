#include<iostream>
using namespace std;
int main()
{
    int c,n,r,arm=0;
    cout<<"enter a number : ";
    cin>>n;

    c=n;

    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }

    if(c==arm)
    cout<<"the number is palimdrome .";
    else
    cout<<"the number is not palimdrome .";

    return 0;
}