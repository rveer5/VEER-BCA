#include<stdio.h>
void main()
{
    int first[5],second[5],sum[5],i;
    printf("enter the first array element \n:");
    for(i=0;i<5;i++)
    scanf("%d",&first[i]);
    printf("enter thhe second array element\n :");
    for(i=0;i<5;i++)
    scanf("%d",&second[i]);
    for(i=0;i<5;i++)
    sum[i]=first[i]+second[i];
    for(i=0;i<5;i++)
    printf("\nthe sum of first and second array at index  %d is: %d",i,sum[i]);



}