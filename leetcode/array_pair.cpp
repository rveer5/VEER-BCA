#include<iostream>
using namespace std;
int  main()
{
    int arr[]={1,2,3,4,5,10,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int temp;
    int check=5;
    int ans=0;
    int half=size/2;
    cout<<half<<endl;

    for(int i=0;i<size-1;i++)
    {
        for(int k=i+1;k<size;k++)
        {
            if((arr[i]+arr[k])%check==0)
            {
                ans+=1;
            }
        }
    }
    cout<<ans<<endl;
    
    if(ans==half)
    {
        cout<<"True"<<endl;
        
    }
    else
    cout<<"False"<<endl;
}

// this question is from linked list but i didn't understood 
// 