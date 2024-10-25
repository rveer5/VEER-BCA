#include<iostream>
#include<vector>
using namespace std;
vector<int> smaller(int arr[], int n,int k){
    vector<int>res;
    for(int i = 0;i<n;i++){
    if(arr[i]<k){
        res.push_back(arr[i]);    
    }
}
return res;
}
int main(){
    int arr[]={10,2,10,4,3};
    vector<int>res=smaller(arr,5,10);
    for(int x:res){
        cout<<x<<endl;
    
    }
    return 0;
}