#include<iostream>
using namespace std;
int main()
{
    int s[]={1,2,3,4,5,6,7,8,9,10,55};
    int sum=0;

    for(int i=0;i<=10;i++)
    {
        sum=sum+s[i];

    }

    cout<<"Sum is : "<<sum;
    return 0;


}