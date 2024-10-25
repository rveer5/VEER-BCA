#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
    int r=n%10;
    n=n/10;
    return r+sum(n);
    }
}
int main()
{
    int num=12;
    int result=sum(num);
    cout<<result;

}