#include <iostream>
using namespace std;

// Define the class for a node in the linked list
class Node {
public:
    int data;
    Node* next;
    
    // Constructor to initialize node with data
    Node(int x) : data(x), next(nullptr) {}
};

// Define the LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the head of the linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a node at the end of the linked list
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to find the middle of the linked list using slow and fast pointers
    Node* findMiddle() {
        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Function to reverse the linked list starting from a given node
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    // Function to check if the linked list is a palindrome
    bool isPalindrome() {
        if (head == nullptr || head->next == nullptr) return true;

        // Step 1: Find the middle of the list
        Node* middle = findMiddle();

        // Step 2: Reverse the second half of the list
        Node* secondHalf = reverseList(middle);

        // Step 3: Compare the first half and the second half
        Node* firstHalf = head;
        while (secondHalf != nullptr) {
            if (firstHalf->data != secondHalf->data) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

// Main function to test the code
int main() {
    LinkedList list;

    // Create a linked list (e.g., 1 -> 2 -> 3 -> 2 -> 1)
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(2);
    list.append(1);

    cout << "Linked List: ";
    list.printList();

    if (list.isPalindrome()) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is NOT a palindrome." << endl;
    }

    return 0;
}
