// wrong code 
// do again , and try to understand code, well.

#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int num=9;
    int result=fib(num);
    cout<<result;
}