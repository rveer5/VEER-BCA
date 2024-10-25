#include<stdio.h>
void main()
{
    int i,odd=0;
    int a[10];
    printf("enter the elements of array :\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2!=0)
        {
            odd++;
        }
    }
    printf("total odd numbers are : %d",odd);

}