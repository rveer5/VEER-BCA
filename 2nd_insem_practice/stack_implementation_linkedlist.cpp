#include<iostream>
using namespace std;
class Node{
    public: int data;
    Node* next=NULL;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};
class Stack{
    private:
    Node* top;
    public:
    Stack(){
        this->top=NULL;
    }
    bool isEmpty() {
        return top == nullptr;
    }

    void push(int value){
        Node* temp= new Node(value);
        // if(top==NULL){
        //     top=temp;
        //      return;
        // }
        
        temp->next=top;
        top=temp;

    }

    void pop(){
        if (isEmpty()){
            cout<<"stack is empty";
            return;

        }
        Node* temp=top;
        top=top->next;
        cout<<"popped"<< " "<<temp->data<<" "<<"from the stack"<<endl;
        delete temp;
    }

    int peek(){
        if(isEmpty()){
            cout<<"stack is empty";
            return -1;
        }
        return top->data;
    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty";
        }
        else{
            Node* temp=top;
            while(temp){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
~Stack() {
        while (!isEmpty()) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.display();
    cout<<stack.peek();
}