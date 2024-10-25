#include<iostream>
using namespace std;
// int fun(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     cout<<n<<"\n";
//     fun(n-1);
//     cout<<n<<"\n";

// }
// int main()
// {
//     int num=3;
//     fun(num);
// }
int fun(int n)
{
    if(n==1)
    {
        return 0;    
    }
    else{
        return 1+fun(n/2);
    }
}
int main()
{
    int num=16;
    int c=fun(num);
    cout<<c;
}
