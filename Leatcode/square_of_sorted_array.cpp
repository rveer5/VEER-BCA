#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{-4,2,1,10};
     int n=nums.size();
    vector<int> result(n);
   
    int l=0;
    int h=n-1;
    int pos=n-1;
    while (l<=h)
    {
        int leftsorted=nums[l]*nums[l];
        int rightsorted=nums[h]*nums[h];
        if(leftsorted>rightsorted){
            result[pos--]=leftsorted;
            l++;
        }
        else{
            result[pos--]=rightsorted;
            h--;
        }
    }
    for(int c:result){
        cout<<c<<" ";
    }
    return 0;
}