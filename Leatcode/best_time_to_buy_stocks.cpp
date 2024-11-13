#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{4};
    int n=v.size();
    int buy=v[0];
    int profit=0;
   for(int i=1;i<n;i++){
    profit=max(profit,v[i]-buy);
    buy=min(buy,v[i]);
   }
   cout<<profit;
    }