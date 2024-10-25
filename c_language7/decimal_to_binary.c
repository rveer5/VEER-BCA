#include<stdio.h>
int main()
{
    int r,n,b=0,base=1;
    printf("enter the decimal number : ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%2;
        b=b+r*base;       //value of binary number is stored in b variable 
        n=n/2;
        base=base*10;
    }

    printf("the binary number is : %d",b);

    return 0;      //dry run the logic to understand it more easily .
}