#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSunrise(const vector<int>& buildings) {
    int maxHeight = 0; 
    for (int height : buildings) {
        maxHeight = max(maxHeight, height);
    }
int count=0;
    for (size_t i = 0; i < buildings.size(); ++i) {
        if (i == 0 || (buildings[i] > buildings[i - 1]&&buildings[i]<=maxHeight)) {
        
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> buildings{1,5,4,9,7,10};

    int result = countSunrise(buildings);

    cout <<result << endl;

    return 0;
}
