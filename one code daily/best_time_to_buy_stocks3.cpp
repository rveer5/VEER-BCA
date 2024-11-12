#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{2,3,1,3,7};
    int n=v.size();
    int k=2;


int buy1 = v[0], buy2 = v[0]  ;
int profit1 = 0, profit2 = 0;

for (int price : v) {
    buy1 = min(buy1, price);
    profit1 = max(profit1, price - buy1);
    
    buy2 = min(buy2, price - profit1);
    profit2 = max(profit2, price - buy2);
}
cout<<profit2;
}
