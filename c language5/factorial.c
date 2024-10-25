#include<stdio.h>
int factorial(int);
void main()
{
    int a,fact;
    printf("enter the  number:\n");
    scanf("%d",&a);
    fact=factorial(a);
    printf("factorial of %d is %d",a,fact);

}

int factorial(int s)
{
    int i,f=1;
    for(i=s;i>=1;i--)
    {
        f=f*i;

    }
    return f;
}