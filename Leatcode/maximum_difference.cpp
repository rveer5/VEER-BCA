#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,1};
    int n=4;
    int max_diff=0;
    if(n<2){
        return 0;
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
            max_diff=max(max_diff,arr[i]-arr[i-1]);
    }
   cout<<max_diff;
return 0;
}