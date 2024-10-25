#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int s[]={2,4,-3,8,9,45,-11,43};
    int min=INT_MAX;

    for(int i=0;i<8;i++)
    {
        if(s[i]<min)
        {
             min=s[i];
        }
    }

    cout<<"Minimum value is : "<<min;

    return 0;

    
}