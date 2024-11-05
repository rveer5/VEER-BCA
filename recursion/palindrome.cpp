#include <iostream>
using namespace std;

bool palindrome(int arr[], int low, int high) {
    if (low >= high) {
        return true;
    }
    if (arr[low] != arr[high]) {
        return false;
    }
    return palindrome(arr, low + 1, high - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int n = 5;
    bool ispalindrome = palindrome(arr, 0, n - 1);

    cout << (ispalindrome ? "true" : "false") << endl;  // Print result as "true" or "false"
    return 0;
}
