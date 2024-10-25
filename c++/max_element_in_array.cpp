#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int s[]={2,4,6,8,9,45,87,43};
    int max=INT_MIN;

    for(int i=0;i<8;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }

    cout<<"Maximum value is : "<<max;

    return 0;

    
}