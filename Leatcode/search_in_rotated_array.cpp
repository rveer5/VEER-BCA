#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{0,1,2,4,5};
    int target=4;
        int low=0;
        int n=nums.size()-1;
        int high=low+(n-low);
        int mid;
        while(low<high){
            mid=low+high/2;
            if(nums[target]==nums[mid]){
                return mid;
            }
            else if(nums[target]<nums[mid]){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return -1;
        

}