#include<stdio.h>
void main()
{
    int x=980,c,r,s=0;             //the number is implicitly given

    c=x;
    while(x>0)
    {
        r=x%10;
        s=r+(s*10);
        x=x/10;
    }

    if(c==s)
    printf("the number is palimdrome .");
    else
    printf("the number is not palimdrome .");


}