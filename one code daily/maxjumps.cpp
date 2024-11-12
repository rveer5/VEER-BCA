#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{2,3,1,1,4,5};
    int curr_end=0;int jumps=0; int furthest = 0;
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        furthest=(nums[i]+i>furthest)?nums[i]+i:furthest;//2
        if(i==curr_end){
            jumps++;
            curr_end=furthest;
        }
        if(curr_end>=n-1){
            break;
        }
        
        
    }
    cout<<jumps<<endl;
    // if(nums[curr_end]==furthest){
    //         cout<<"true";
    //     }
    //     else{
    //         cout<<"false";
    //     }
    
    return 0; 
}