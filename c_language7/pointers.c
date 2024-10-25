#include<stdio.h>
int main()
{
    int a=10,b=9;
    int*p,*q;
    p=&a;
    q=&b;


    printf("value of a =  %d",a);
    printf("\nvalue of a = %d",*p);

    printf("\naddress of a =%x",p);           // %x=%x access specifier is used when we want address in hexadecimal form 

    printf("\naddress of a= %d",p);

    printf("\naddress of a = %x",&a);

    printf("\naddress of p = %d",&p);

    printf("\naddress of p = %x",&p);

    return 0;
}