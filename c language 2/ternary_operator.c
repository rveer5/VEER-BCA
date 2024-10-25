#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    (num1>num2&&num1>num3)?printf("num 1 is greater "):
    (num2>num1&&num2>num3)?printf("num 2 is greater"):
    printf("num 3 is greater");

    return 0;
}























