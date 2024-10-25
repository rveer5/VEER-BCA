#include<iostream>
#include<string.h>                             // when using CHAR ARRAY STRING ,no need to include any header file , until using functions.
using namespace std;                           // when using functions in CHAR ARRAY STRING, include header file , ctring  or  string.h 
int main()
{
    // char s[5];
    // cout<<"Enter your name: ";                // when using object cin>> ,it takes only first string,means till white spaces,
    // cin.getline(s,25);                        // but when using cin.getline , it takes the whole string 
    // cout<<strlen(s);                          // getline is a function 



// above code is stored in stack memory , because it is without pointer 

//  when using pointer code memory is stored in heap.

const char *s1="hello";
cout<<s1;




}