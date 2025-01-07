#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{0,1,4,0,5};
{
    int j = 0; // Pointer to track position for non-zero elements

    // Traverse the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            // Swap non-zero element with the position at j
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
for(int x:nums){
    cout<<x;
}
}