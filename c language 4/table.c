#include<stdio.h>
void main()
{
int number,table,i;
printf("enter the number:");
scanf("%d",&number);
for(i=1;i<=10;i++)
{
table=number*i;
printf("%d\n",table);
}
}