#include <stdio.h>
int sum(void);        //function declaration
void main()           //main function
{
    int S;
    S=sum();          //function calling
    printf("sum=%d",S);
    printf("shivay ka demo");
}

int sum()             //function  defination
{
    int a,b,sum=0;
    printf("enter the numbers: \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return (a+b);
}

// no argument with return type