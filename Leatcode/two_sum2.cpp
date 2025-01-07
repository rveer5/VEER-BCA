#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;                 // Start of the array
    int right = numbers.size() - 1; // End of the array

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        
        if (sum == target) {
            // Return the indices (1-indexed as required)
            return {left + 1, right + 1};
        }
        else if (sum < target) {
            left++;  // Move left pointer to increase the sum
        }
        else {
            right--; // Move right pointer to decrease the sum
        }
    }
    
    // In case no solution is found, though we assume a solution exists per problem statement.
    return {};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15}; // Example sorted array
    int target = 9;
    
    vector<int> result = twoSum(numbers, target);
    
    // Print the result
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
