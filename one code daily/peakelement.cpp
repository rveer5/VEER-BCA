#include<iostream>
using namespace std;
// int main(){
//     int arr[]={1,1,1,1,1,1,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int peak=-1;
//     if (n > 1 && arr[0] > arr[1]) {
//         peak = 0;
//     }
//     for(int i=1;i<n-1;i++){
//         if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
//             peak=i;
//             break;
//         }
//     }
//     if (peak == -1 && n > 1 && arr[n - 1] > arr[n - 2]) {
//         peak = n - 1;
//     }

//     cout<<peak;
// }
// timecomplexity O(n log n) code -->
int main(){
    int arr[]={7,2,2,2,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0;
    int i=arr[0];
    int h=n-1;
    int mid;
    int peak=0;
    while(l<h){
        
        mid=l+(h-l)/2;
        if(arr[mid]>arr[mid+1]){
            h=mid;
        }
        else {
            l=mid+1;
        }
        peak=l;
        
    }
    cout<<peak;

}