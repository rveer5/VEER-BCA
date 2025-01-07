#include<iostream>
using namespace std;

int main() {
    int arr[3][3];

    // Input the matrix
    cout << "Enter elements of a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";  // Print elements with a space between them
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
