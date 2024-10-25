#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp;
    char str[10];
    printf("enter the string : \n");
    gets(str);      //gets function  is used to take input from user . In the form of string .
    
    fp=fopen("shivay.txt","w");

    if(fp==NULL)
    {
        printf("error");
        return 1;
    }
    fputs(str,fp);     //fputs function is used to print the whole string 
    fclose(fp);

    return 0;


}