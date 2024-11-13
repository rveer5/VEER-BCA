#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,5,4,7,8}; //8
    int buy=v[0];
    int profit=0;
    int k=2;
    int max_profit=0;
    while(k>0){
    for(int i=1;i<v.size();i++){
        if(profit<=-1){
            profit=0;
        }
        if(v[i]<v[i+1]){
            profit=max(profit,v[i]-buy);
        }
        buy=min(buy,v[i]);
        
    }
    k--;
    }
    cout<<profit;

}