#include<iostream>
using namespace std;
int sqr(int num){
    int l=1;
    int h=num;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid<num){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int main(){
    int num=25;
    cout<<sqr(num);

    
}