#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *Next;
    Node(int data){
        this->data=data;
        this->Next=NULL;
    }
};
class Stack{
    private: 
    Node *top;
    public:
    Stack(){
        this->top=NULL;
    }
     bool isEmpty() {
        return top == nullptr;
    }
    void push(int data){
        Node* temp=new Node(data);
        if(top==NULL){
            top=temp;
            return;
        }
        temp->Next=top;
        top=temp;
    }
    void pop(){
        if(isEmpty){
            cout<<"stack underflow"<<endl;
            return;
        }
    Node* curr=top;
    top=top->Next;
    cout<<curr->data<<"popped from stack"<<endl;
    delete curr;


    }
};