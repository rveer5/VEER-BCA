//    *
//   **
//  ***
// ****
//***** 

// easy logic. it's just a game of writing code in a notebook , first .and breaking the logic in steps .
#include<iostream>
using  namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<4;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}