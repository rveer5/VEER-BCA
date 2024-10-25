// sum of maximum contiguous subarray wihtout kadane's algorithm .
// time complexity is 0(n square )# because we are using two loops .
// This is simple approach but not efficient .

// #include<iostream>
// using namespace std;
// #include<climits>
// int main()
// {
//     int arr[]={62,5,7,-1,-18,-39};
//     int size=sizeof(arr)/sizeof(int);
//     int max=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         int cursum = 0;
//         for(int j=i;j<size;j++)
//         {
//             cursum+=arr[j];
//             if(cursum>max)
//             {
//                 max=cursum;
//             }

            
//         }

//     }
//     cout<<max;
// }

// Efficient approach that is kadane's algorithm .

// kadane's algorithm is just made of three simple steps .
// any doubt go to love babbar video youtube, that is kadane's algorithm.
#include<iostream>
#include<math.h>
using  namespace std;
int main()
{
    int arr[]={1, 3, 8, -2, 6, -8, 5};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        // first step
        sum=sum+arr[i];
        // second step
        maxi=max(sum,maxi);
        // or
        // if(sum>maxi)
        // {
        //     maxi=sum;
        // }
        
        // Third step.
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<maxi;

}