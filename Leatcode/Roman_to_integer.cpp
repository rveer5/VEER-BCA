#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
//unordered map is used because it has lower time complexity as compared to ordered map.

int romanToInt(string &s) {
    // Map to store Roman numerals and their integer values
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    int result = 0;
    int prevValue = 0;

    // Traverse the Roman numeral string from right to left
    for (int i = s.length() - 1; i >= 0; --i) {
        int currentValue = romanMap[s[i]];

        // If current value is less than the previous value, subtract it; otherwise, add it
        if (currentValue < prevValue) {
            result -= currentValue;
        } else {
            result += currentValue;
        }

        prevValue = currentValue; // Update previous value for the next iteration
    }

    return result;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "The integer value is: " << result << std::endl;

    return 0;
}
