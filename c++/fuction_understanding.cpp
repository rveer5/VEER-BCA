#include <iostream>
using namespace std;

void findMax(int x, int y) {
    if (x > y) {
        cout << "x is greater." << endl;
    } else {
        cout << "y is greater." << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    findMax(a, b);
    return 0;
}
