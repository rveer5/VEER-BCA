#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,51,78};
    int n=sizeof(arr)/sizeof(int);
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    
}


// another meethod 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(int);

//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<arr[i]<<",";
//     }
// }



