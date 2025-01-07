#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2}; 
    vector<int> intersection;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i=0;    
    int j=0;
    while(i<nums1.size()&&j<nums2.size()){
    if(nums1[i]==nums2[j]){     
       intersection.push_back(nums1[i]);
         i++;
         j++;
        }
    else if (nums1[i] < nums2[j]) {
            i++;}
            else {
            j++;
    }
}
for(int x:intersection){
        cout<<x;
    }
    return 0;
}