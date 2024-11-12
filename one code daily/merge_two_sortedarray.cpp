#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1{};
    vector<int> v2{2,5,3};
    int m=v1.size();
    int n=v2.size();
    if(m==0){
        v1.insert(v1.begin(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        for(int i:v1){
            cout<<v1[i];
        }
    

    }
    else if(m>n){
                v1.resize(n);
                for(int i=0;i<n;i++)
                {
                v1.push_back(v2[i]);        
                }
                for(int i:v1)
                {
                    cout<<i;
                }
        }
    else{
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        for(int i:v1){
            cout<<v1[i];
        }
    }
}