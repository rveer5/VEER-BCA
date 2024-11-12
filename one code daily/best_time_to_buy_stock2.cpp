#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prices{2, 0, 5, 4, 6, 8};
    int profit = 0;
    int count =0;

    for (int i = 1; i < prices.size(); i++) {
        
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
            count++;
        }
        if(count==2){
            break;
        }
    }

    cout << "Maximum Profit: " << profit << endl;
    return 0;
}
