#include<iostream>
#include<string>
using namespace std;
int main()
{                                                            // counting letters of string using for loop.
    // int count=0;
    // string wahe="shivay hindwani";
    // for(int i=0;wahe[i]!='\0';i++)
    // {
    //     count+=1;
    // }
    // cout<<"total letter are :"<<count;

    string s="shivay";                                        // converting characters upper to lower or lower to upper ,
    for(int i=0;s[i]!='\0';i++)                               // by checking each of them 
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }

    }
    cout<<s;


}