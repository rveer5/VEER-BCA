#include<stdio.h>
int main()
{
    int i,a[5];
    printf("enter the elements :\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("the elements with index are : %d    %d\n",i,a[i]);
    }
    printf("the value in index 0 is  :%d\n",a[0]);
    return 0;

}