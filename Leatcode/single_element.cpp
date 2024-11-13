#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,1,2,2,3,3,4,4,5};
    for(int i=0;i<v.size();i+=2){
        if(i==v.size()-1)
        {
            cout<<v[i];
            break;
        }
        else if(v[i]==v[i+1]){
            continue;
        }
        else{
            cout<<v[i];
            break;
        }
    }
}


// int main(){
//     vector<int>nums{1,1,2,2,3,3,4};
//     int unique=0;
//     for(int i=0;i<nums.size();i++)
//     {
//         unique^=nums[i];
//     }
//      cout<<unique;

// }