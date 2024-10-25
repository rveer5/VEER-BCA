#include<stdio.h>
void main()
{
    int n,c,r,sum=0;
    
    printf("enter a number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=r+(sum*10);
        n=n/10;



    }
    if(c==sum)
    printf("the number is palindrome");
    else
    printf("not palindrome");
    
}