#include<iostream>
using namespace std;
int main()
{
    int a=7,b=5,c=3;
    (a>b&&a>c)?cout<<"a is greater .":(b>a&&b>c)?
    cout<<"b is greater .":cout<<"c is greater .";

    return 0;
}