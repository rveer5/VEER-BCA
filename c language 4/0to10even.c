#include<stdio.h>
void main()
{
    int i,even[10];
    printf("enter the numbers:\n ");
    for(i=0;i<10;i++)
    scanf("%d",&even[i]);
    for(i=0;i<10;i++)
    if(even[i]%2==0)
    printf("\nthe number%d at index %d is even",even[i],i);
    else
    printf("\nthe number %d with index %d is odd",even[i],i);



}