// Multiple Inheritance Ambiguity: When a class inherits from multiple base classes, 
// and those base classes have member functions or variables with the same name, 
// the derived class may inherit multiple definitions for the same member. 
// This can lead to ambiguity when trying to access or call that member from the derived class.

// class Base1 {
// public:
//     void display() {
//         cout << "Base1";
//     }
// };

// class Base2 {
// public:
//     void display() {
//         cout << "Base2";
//     }
// };

// class Derived : public Base1, public Base2 {
// };

// int main() {
//     Derived obj;
//     obj.display(); // Error: ambiguous call to 'display'
//     return 0;
// }

// In this example, the Derived class inherits the display() function from both Base1 and Base2,
//  causing ambiguity when attempting to call obj.display().
