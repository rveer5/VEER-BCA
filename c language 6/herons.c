#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,area;
    printf("enter the length of 1st side :  ");
    scanf("%d",&a);
    printf("enter the length of 2nd side :  ");
    scanf("%d",&b);
    printf("enter the length of 3rd side :  ");
    scanf("%d",&c);

    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));


    printf("the area of triangle is : %d",area);

    return 0;




}