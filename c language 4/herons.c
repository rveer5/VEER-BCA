#include<stdio.h>
#include<math.h>
void main()
{
    int area,S,a,b,c;
    printf("enter lenght of side1:\n");
    scanf("%d",&a);
     printf("enter lenght of side2:\n");
    scanf("%d",&b);
     printf("enter lenght of side3:\n");
    scanf("%d",&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\narea of triangle is :%d",area);
}
