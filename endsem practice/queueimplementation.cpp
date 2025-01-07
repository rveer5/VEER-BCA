#include<iostream>
using namespace std;
class Queue{
    private:
    int capacity,front,rear;
    int* arr;

    public:
    Queue(int size){
        capacity=size;
        arr=new int[capacity];
        front=rear=-1;
    }
    ~Queue(){
        delete[] arr;
    }
    bool isFull() {
        return rear == capacity - 1;
    }
    bool isempty(){
        return front=-1||front>rear;
    }
    int enqueue(int d){
        if(isFull()){
            cout<<"queue is full";
        }
        if(isempty()){
            front=0;
            arr[++rear]=d;

        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"queue is empty";
            return;
        }
        front++;

    }
    void display() {
        if (isempty()) {
            cout << "Queue is empty!\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};