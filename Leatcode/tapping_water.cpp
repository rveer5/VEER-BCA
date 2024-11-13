#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{0,1,0,2,1,0};
    int n=nums.size();
    int water_trapped=0;
    int left=0;int right=n-1;
    int left_max=nums[left];
    int right_max=nums[right];
   while(left<right){
    if(nums[left]<nums[right]){
        if(nums[left]>left_max) //
        {
            left_max=nums[left];
        }
        else
        {
        water_trapped+=left_max-nums[left];
        
        }
        left++;
        }
        
        else{
            if(nums[right]>right_max)
            { 
                right_max=nums[right];
            }
        else{
        water_trapped+=right_max-nums[right];
        
        }
        right--;
        }
   }
        cout<<water_trapped<<endl;
        return 0;
    }