#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums{1,3,2};
    
    int operations=2;
    int penalty=0;
    while(operations>0){
        int n=nums.size();
        for(int i=0;i<n;i++){
            penalty=max(penalty,nums[i]);  
        }
        int a=penalty

        for(int i=0;i<nums.size();i++){
            penalty=max(penalty,nums[i]);  
        }
        operations--;
    }
    for(int x:nums){
        cout<<x<<" ";
    }

}