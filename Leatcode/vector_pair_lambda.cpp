#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // Create a vector of pairs: (name, height)
        vector<pair<string, int>> people;
        
        for (int i = 0; i < names.size(); ++i) {
            people.push_back({names[i], heights[i]});
        }
        
        // Sort the vector based on height in descending order
        sort(people.begin(), people.end(), [](pair<string, int>& a, pair<string, int>& b) {
            return a.second > b.second;  // Compare heights
        });
        //[] this is used to take external values or variables
        
        // Extract the sorted names
        vector<string> sortedNames;
        for (auto& person : people) {
            sortedNames.push_back(person.first);
        }
        
        return sortedNames;
    }
};

int main() {
    Solution solution;
    vector<string> names = {"Alice", "Bob", "Charlie"};
    vector<int> heights = {170, 180, 160};
    
    vector<string> sortedNames = solution.sortPeople(names, heights);
    
    for (const auto& name : sortedNames) {
        cout << name << " ";
    }
    return 0;
}
