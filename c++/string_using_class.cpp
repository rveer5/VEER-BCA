#include<iostream>
#include<string>                           // string is class , when using string class ,include header file <string>
using namespace std;
int main()
{
    string s="hello";                     // variables of string datatype are known as OBJECT.
    string str;
    str="shivay";
    cout<<s<<" "<<str;

    string s2,s3;

    //  cin reads only first string , or characters before spaces .
    // getline read full string include white spaces.
    // syntax below .

    cout<<"Enter yourr name :";
    getline(cin,s3);
    cout<<s3;
}