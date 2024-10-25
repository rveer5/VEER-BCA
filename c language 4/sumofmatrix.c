#include<stdio.h>
void main()
{
    int i,j,a[3][3],sr,sc;
    printf("enter the values of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is :\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sr=sc=0;
        for(j=0;j<3;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("SR=%d,SC=%d",sr,sc);
    }
     


}