#include <iostream>
using namespace std;

class Queue {
private:
    int* queue;       // Array to hold the queue
    int capacity;     // Maximum capacity of the queue
    int front;        // Index of the front element
    int rear;         // Index of the rear element

public:
    // Constructor to initialize the queue
    Queue(int size) {
        capacity = size;
        queue = new int[capacity];
        front = 0;
        rear = -1;
    }

    // Destructor to clean up memory
    ~Queue() {
        delete[] queue;
    }

    // Function to enqueue an element
    void Enqueue(int data) {
        if (rear == capacity - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        queue[++rear] = data;
    }

    // Function to dequeue an element
    void Dequeue() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Dequeued: " << queue[front++] << endl;

        // Reset front and rear if the queue becomes empty
        if (front > rear) {
            front = 0;
            rear = -1;
        }
    }

    // Function to display the queue
    void Display() {
        if (front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; ++i) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);

    q.Display();

    q.Dequeue();
    q.Dequeue();

    q.Display();

    q.Dequeue();
    q.Dequeue();

    return 0;
}
