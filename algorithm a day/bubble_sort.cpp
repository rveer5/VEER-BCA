// bubble sort algorithm .
// bubble sort - in every round the largest value takes their correct place  
// more detail notes in love babbar video and gfg website .

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,10,7,6,14,9};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);


            }
        }
    }
    for(auto x:arr)
    {
        cout<<x<<"   ";
    }
}