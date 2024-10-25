#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a number:\n");
    scanf("%d",&a);
    printf("enter b number:\n");
    scanf("%d",&b);
    printf("enter c number:\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("a number is greater ");
    else if(b>a&&b>c)
    printf("b number is greater");
    else 
    printf("c number is greater");

    }