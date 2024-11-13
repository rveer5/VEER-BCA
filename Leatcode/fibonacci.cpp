// good fibonacci code .
// efficient logic .
#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n=10;
    cout<<a<<" "<<b<<" ";
    int newvalue;
    for(int i=1;i<=10-2;i++)
    {
        newvalue=a+b;
        cout<<newvalue<<" ";
        a=b;
        b=newvalue;

    }

}