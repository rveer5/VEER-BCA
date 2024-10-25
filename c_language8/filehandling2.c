#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp;
    char ch;
    printf("enter the character  :\n");
    scanf("%c",&ch);       //scanf is used to take  input (character) from the user.

    fp=fopen("shivay.txt","w");

    if(fp==NULL)
    {
        printf("error");
        return 1;
    }
    fputc(ch,fp);        //fputc is used to print the character.
    fclose(fp);

    return 0;


}