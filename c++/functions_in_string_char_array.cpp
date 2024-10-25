// functions in STRING using CHAR ARRAY   , more details in notes  

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[]="shivay";
    char s2[]=" hindwani";
    strcat(s1,s2);                 //  1. = strcat function is used to concatenate two string 
    cout<<s1;                      // 2nd version of concatenation is also there know as =strncat.


    char p1[]="shivay";
    char p2[]="";
    strcpy(p2,p1);                  // 2.= strcpy function is used to copy one string two another .
    cout<<"\n"<<p2;                 // 2nd version is also available known as = strncpy

    // so many more functions are available in string using char array ,to see them use NOTES .








































}















































