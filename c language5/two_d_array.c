#include<stdio.h>
void main()
{
    int i,j,a[5][4];
    printf("enter the elements in two dimensional array :\n ");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("elements of two dimensional array are :\n");

        for(i=0;i<=4;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }


}