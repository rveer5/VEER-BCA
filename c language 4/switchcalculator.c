#include<stdio.h>
void main()
{
    char operator;
    int a,b,add,sub,mult,div;
    printf("\nenter the operator:");
    scanf("%c",&operator);
    printf("\nenter two operands:");
    scanf("%d%d",&a,&b);

    switch(operator)
    {
        case'+':
        add=a+b;
        printf("addition is =%d",add);
        break;

        case'-':
        sub=a-b;
        printf("suntraction is =%d",sub);
        break;

        case'*':
        mult=a*b;
        printf("multiplication is =%d",mult);
        break;


        case'/':
        div=a/b;
        printf("division is =%d",div);
        break;






    }
}
