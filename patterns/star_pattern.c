#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }

}

// printing dollar pattern by asking the size

// #include<stdio.h>
// int main()
// {
//     int n;

//     printf("enter the size :");
//     scanf("%d",&n);
//         for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("$");
//         }
//         printf("\n");
//     }
// }