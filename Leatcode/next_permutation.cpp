#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &v, int index, vector<vector<int>> &ans) {
    if (index == v.size()) {
        ans.push_back(v); // Store the current permutation of v
        return;
    }
    for (int j = index; j < v.size(); j++) {
        swap(v[index], v[j]);          // Swap to create a new permutation
        solve(v, index + 1, ans);       // Recur with the next index
        swap(v[index], v[j]);           // Backtrack to the original state
    }
}

int main() {
    vector<int> v{1, 2, 3};
    vector<vector<int>> ans;
    solve(v, 0, ans);

    // Print all permutations
    for (const auto &permutation : ans) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
