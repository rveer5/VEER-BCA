
// sorting two array  = by copying it to one single array . and then using sort algorithm # easy and naive approach
//  naive solution.

#include<iostream>
using namespace std;
#include<algorithm>
int  main()
{
    int arr[]={1,2,3,4,4,7,9,98};
    int arr2[]={34,2,31,67,5,11,2};
    int arr_s=sizeof(arr)/sizeof(int);
    int arr2_s=sizeof(arr2)/sizeof(int);
    int n;
    n=arr_s+arr2_s;
    int new_arr[n];
    for(int i=0;i<arr_s;i++)
    {
        new_arr[i]=arr[i];


    }
    int k=0;
    for(int j=arr_s;j<n;j++)
    {
        new_arr[j]=arr2[k];
        k++;
    }
   sort(new_arr,new_arr+n);
    for(int f=0;f<n;f++)
    {
        cout<<new_arr[f]<<"  ";
    }


}

// comparing one array with another tricky but good approach , require less space and less time complexity.
// efficient approach 
// works for sorted array only .

int main()
{
    int arr[]={1,2,3,4,4,7,9,98};
    int arr2[]={34,37,39,67,78,110,942};
    int arr_s=sizeof(arr)/sizeof(int);
    int arr2_s=sizeof(arr2)/sizeof(int);
    int i=0,j=0;
    while(i<arr_s && j<arr2_s)
    {
        if(arr[i]<arr2[j])
        {
            cout<<arr[i++]<<"  ";
        }
        else{
            cout<<arr2[j++]<<"  ";
        }
    }
    
     while(i<arr_s)
        {
            cout<<arr[i++]<<"  ";
        }
     while(j<arr2_s)
     {
        cout<<arr2[j++]<<"  ";
     }
return 0;

}
