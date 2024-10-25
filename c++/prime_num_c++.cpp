#include<iostream>
using namespace std;
int main()
{
    int num,count=0,i;
    cout<<"enter a number :";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count+=1;
        }
        
    }
    if(count==2)
    cout<<"the number is prime.";
    else
    cout<<"the number is not prime.";

return 0;

    
}    