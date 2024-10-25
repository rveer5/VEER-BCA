// selection sort algorithm .
// solution .
// for detail explanation go to gfg website # search selection sort  .
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,3,6,1,9,5,6,98,76,56,43};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<"   ";

    }

}