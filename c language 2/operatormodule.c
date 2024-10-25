#include<stdio.h>
int main()
{
    int num1,num2,module;
    printf("enter number 1  :");
    scanf("%d",&num1);
    printf("enter number 2  :");
    scanf("%d",&num2);

    module=num1%num2;
    printf("module is %d",module);
    return 0;

}
