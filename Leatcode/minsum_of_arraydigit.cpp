#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    vector<int>nums{11,0,14,12};
    int digit;
    
    int i=0;
    int minsum=INT_MAX;
        while(i<nums.size()){
        int num=nums[i];
        int sum=0;
            while(num>0)
            {
                digit=num%10;
                sum+=digit;
                num=num/10;
            }
        minsum=min(minsum,sum);
        i++;
    }
    cout<<minsum;
}