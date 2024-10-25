#include<stdio.h>
void sum(int,int);
void main()
{
    sum(5,9);
    printf("\n");
    sum(10,10);
}
void sum( int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum of a and b is = %d",sum);


}