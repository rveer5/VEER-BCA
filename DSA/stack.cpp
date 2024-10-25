//stack implementation using array
#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public: 
    int top=-1;
    int *arr;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Overflow\n";
        }
    }


     void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Underflow\n";
        }
    }
     int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty\n";
            return -1;
        }
    }

};

  

int main(){
    Stack s(5);
    s.push(12);
    s.push(52);
    s.push(42);
    s.push(32);
    s.push(22);
    s.push(1);
    cout<<s.peek();

}