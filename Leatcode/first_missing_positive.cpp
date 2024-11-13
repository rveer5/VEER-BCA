    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        vector<int>nums{-1,1,2,4};
        int n=nums.size();
        for(int i=0;i<n;++i){
            while(nums[i]>0 &&nums[i]<=n && nums[nums[i]-1]!=nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                cout<<i+1;
            }
        }
        return 0;
    }
