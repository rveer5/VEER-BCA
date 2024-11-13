#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        // Move left pointer until an English letter is found
        if (!isalpha(s[left])) {
            left++;
            continue;
        }
        // Move right pointer until an English letter is found
        if (!isalpha(s[right])) {
            right--;
            continue;
        }
        
        // Swap the English letters at left and right
        swap(s[left], s[right]);
        left++;
        right--;
    }

    return s;
}

int main() {
    string s = "a-bC-dEf-ghIj";
    cout << "Original: " << s << endl;
    cout << "Reversed: " << reverseOnlyLetters(s) << endl;
    return 0;
}
