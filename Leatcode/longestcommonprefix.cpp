#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) 
            return "";  // If array is empty
        string prefix = strs[0];     // Initialize prefix as the first string
        
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) { // Reduce prefix length if mismatch
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) 
                    return ""; // No common prefix
            }
        }
        return prefix;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << solution.longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << solution.longestCommonPrefix(strs2) << endl;

    return 0;
}
