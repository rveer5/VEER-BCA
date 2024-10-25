// Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, 
// where a new element is added at one end (top) and an element is removed from that end only

// The functions associated with stack are: 
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 


// Stack can be implemented on any underlyning container that provide the above operations like vector , deque .


// Basic stack program to reverse a string .
#include<iostream>
#include<stack>                         // include header file stack.
using namespace std;
void reverse(string &str)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        str[i]=s.top();
        s.pop();
    }
}
int main()
{
    string name="shivay";
    reverse(name);
    for(int i=0;i<name.length();i++)
    {
        cout<<name[i]<<"  ";

    }

}
