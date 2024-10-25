#include<stdio.h>
void shivay(int);     //function declaration
void main()           //main function
{
    int a;
    printf("enter one number:\n");
    scanf("%d",&a);
    shivay(a);            //function calling
    printf("\n");
    printf("shivay ka demo");

    
}
void shivay(int b)         //function defination.
{
    
    if(b%2==0)
        printf("the number is even ");
    else
        printf("the number is odd ");
    
    
}
//with argument no return type