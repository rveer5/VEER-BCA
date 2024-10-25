#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<".Enter a element to search :";
    cin>>n;
    int s[]={1,2,3,4,5,6,7,8,89,};
    for(int i=0;i<=8;i++)
    {
        if(n==s[i])
        {
            cout<<"Element found at index : "<<i;
            return 0;
        }
    }
    cout<<"Element not found.";




}










