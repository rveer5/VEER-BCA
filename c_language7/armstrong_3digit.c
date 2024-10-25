#include<stdio.h>
int main()
{
    int n,c,r,arm=0;

    printf("enter a number : ");
    scanf("%d",&n);

    c=n;

    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }

    if(c==arm)
    printf("%d is armstrong .",c);
    else
    printf("%d is not armstrong .",c);

    return 0;

}