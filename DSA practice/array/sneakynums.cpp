#include<iostream>
#include<vector>
using namespace std;
int Main() {
    vector<int> nums{1,2,3,2,1};
    vector<int> sneaky;
    int n=nums.size();
    for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                sneaky.push_back(nums[i]);
                break;
            }
         }
    }
    for(int i=0;i<sneaky.size();i++){
        cout<<sneaky[i]<<" ";
    }
    return 0;
}