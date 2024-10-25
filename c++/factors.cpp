#include<iostream>
using namespace std;
int main()
{
    int  n,sum=0;
    cout<<"enter a number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" is factor of "<<n<<"\n";
            sum+=i;

        }
    }
    cout<<sum<<" is the sum of all factors upto to "<<n;

    return 0;
}