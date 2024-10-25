#include<stdio.h>
void main()
{
    int  i;
    char name[30];
    printf("enter the character\n");  
    for(i=0;i<30;i++)
    scanf("%c",&name[i]);
    printf("the character are\n");
    for(i=0;i<30;i++)
    printf("%c",name[i]);
    

}