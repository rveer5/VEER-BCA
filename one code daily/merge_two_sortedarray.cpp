#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1{1,2,3,0,0,0};
    vector<int> v2{3,4,5};
    int m=3;
    int n=v2.size();
    v1.resize(m);
    for(int i=0;i<n;i++){
        v1.push_back(v2[i]);

    }
    sort(v1.begin(),v1.end());
    for(int i:v1){
        cout<<i;
    }
}