#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<1)
    {
        return n;
    }
    else{
        return n+sum(n-1);

    }
}
int main()
{
    int num=10;
    int result=sum(num);
    cout<<result;

}