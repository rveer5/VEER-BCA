#include<stdio.h>
void main()
{
    int i,shivay[5];
    printf("enter the numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&shivay[i]);
    for(i=0;i<5;i++)
    if(shivay[i]==42)
    {
    printf("\nelement 42  found at index: %d ",i);
    break;
    }
    // else
    // printf("\nelement not found at index: %d",i);
    printf("element not found");
    
    

}