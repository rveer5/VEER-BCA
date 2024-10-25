#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int s[2][3];

    cout<<"Enter the elements of matrix :"<<"\n";

        for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>s[i][j];
        }
    }    
    

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<s[i][j]<<"  ";
            sum+=s[i][j];
        }
        cout<<"\n";
    }

    cout<<"Sum of matrix is : "<<sum;

    return 0;




}