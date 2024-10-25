#include<stdio.h>
int main()
{
    int i,n,c,a=0,b=1;
    printf("enter the number : ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;

    }

    return 0;
}