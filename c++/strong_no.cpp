// A strong number is a positive integer whose sum of factorials of its digits equals the number itself.
//  In other words, if we take the digits of a number and calculate the factorial of each digit, 
//  then sum those factorials, and the result is the same as the original number,

#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,fact;
    cout<<"Enter a number :";
    cin>>n;

    int c=n;

    while(n>0)
    {
        fact=1;
        r=n%10;
        n=n/10;
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;

    }

    if(c==sum)
    cout<<"The number is a strong number.";
    else
    cout<<"The number is  not a strong number,";

    return 0;
}