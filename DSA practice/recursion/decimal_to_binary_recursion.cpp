// this program converts decimal to binary using recursion .
// flow chart in notebook
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    {
        return;

    }
    else{
        fun(n/2);
        cout<<n%2;
    }
}
int main()
{
    int num=7;
    fun(num);

}