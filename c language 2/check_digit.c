#include<stdio.h>
int main()
{
    char digit;
    int num;
    printf("enter the digit:  ");
    scanf("%c",&digit);
    if(digit>='a'&&digit<='z')
    printf("digit is a small alphabet\n");
    else if(digit>='A'&&digit<='Z')
    printf("digit is a capital alphabet\n");
    else
    printf("is a special character\n");
    


    printf("enter the num:  ");
    scanf("%d",&num);
    if(num>=0||num<0)
    printf("the value is a digit");
    
    return 0;
}