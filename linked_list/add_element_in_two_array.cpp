#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>)
int main(){
    vector<int>v{2,1,3};
    vector<int>v1;
    vector<int>v2;
    vector<int>result;
    v1.push_back(v[0]);
    v2.push_back(v[1]);
    for(int i=2;i<v.size();i++){
        if(v1.back()>v2.back()){
            v1.push_back(v[i]);
        }
        else{
            v2.push_back(v[i]);
        }

    }
    for(int i=0;i<v1.size();i++){
        result.push_back(v1[i]);
    }
    for(int j=0;j<v2.size();j++){
        result.push_back(v2[j]);
    }
    for(int i:result){
        cout<<i;
    }
}