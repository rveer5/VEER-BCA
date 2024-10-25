#include<stdio.h>
int main()
{
    int i,x,factorial=1;
    printf("enter a number : ");
    scanf("%d",&x);


    for(i=x;i>=1;i--)
    {
        factorial*=i;
    }

    printf("factorail of %d is : %d",x,factorial);
    return 0;

}