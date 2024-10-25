#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp;
    char ch='s';
    int number=3;
    char str[10];

    printf("enter the string : \n");
    gets(str);      //gets function  is used to take input from user . In the form of string .
    
    fp=fopen("shivay.txt","w");

    if(fp==NULL)
    {
        printf("error");
        return 1;
    }

    fprintf(fp,"%c,%d,%s",ch,number,str);     // fprintf function is used to print different types of terms i.e char,integer,string altogether.
    fclose(fp);

    return 0;


}