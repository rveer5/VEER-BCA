#include<stdio.h>
#include<math.h>
int main()
{
    int i,p,n,total=1;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the power : ");
    scanf("%d",&p);

    total=pow(n,p);
    // for(i=1;i<=p;i++)
    // total*=n;

    printf("the power of %d is : %d",n,total);

    return 0;
}