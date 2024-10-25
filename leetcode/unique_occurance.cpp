#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,5,5,7,7,7,11,16};
    int size=sizeof(arr)/sizeof(int);
    int target=7;
    int first=0;
    int last=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            first=i;
            break;
        }
    }

    last=first;
    for(int j=first+1;j<size;j++)
    {
        if(arr[j]==target)
        {
            last+=1;

        }


    }

    cout<<"first occurance : "<<first<<endl;
    cout<<"last occurance  :"<<last<<endl;

    




}// can't do finding tough.
