#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{9,9,9,9};
    int n=v1.size();
    for(int i=n-1;i>=0;i--){
        if(v1[i]<9){
            v1[i]+=1;
            break;
        }
        v1[i]=0;
    }
    if (v1[0] == 0) {
        v1.insert(v1.begin(), 1);  // Insert 1 at the beginning
    }
    for(int x:v1){
        cout<<x;
    }
}