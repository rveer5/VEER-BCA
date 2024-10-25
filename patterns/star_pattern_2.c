#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
   return 0;      // return 0 mean the termination of the program . i.e shivay will not be printed .

    printf("shivay");
}