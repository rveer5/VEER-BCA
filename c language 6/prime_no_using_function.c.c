#include<stdio.h>
void prime();
void main()
{
    prime();
    prime();
}







    void prime()
    {
    int i,n,count=0;
    printf("\nenter a number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
        count=count+1;
    }
    }
    if(count==2)
    printf("the number is prime ");
    else 
    printf("the number is not prime");
    }
