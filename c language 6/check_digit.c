#include<stdio.h>
void digit();
void main()
{
    digit();
    digit();
    digit();
    digit();
    digit();

}
void digit()
{
    char d;
    printf("\nenter a character :\n");
    scanf(" %c",&d);
    if(d>='a'&&d<='z')
    printf("the character is a small alphabeta");
    else if(d>='A'&&d<='Z')
    printf("the character is a capital character");
    else if(d>='0'&&d<='9')
    printf("the character is a digit");
    else
    printf("the character is a special symbol");

}