#include<stdio.h>
 void division();       //function declaration        
void main()
{
    division();       //function calling
    division();       //function calling
}
void division()       //function defination
{
    int a,b,division;
    printf("\nenter the numbers: \n");
    scanf("%d%d",&a,&b);
    division=a/b;
    printf("division of numbers is: \n%d",division);
}