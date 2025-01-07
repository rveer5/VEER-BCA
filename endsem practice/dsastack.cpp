#include<iostream>
using namespace std;
class stack{
private:int top=-1;
int *arr;
int size;
public:
stack(int size){
    arr=new int[size];
    size=size;
    top=-1;
}
bool isEmpty() {
        return top == -1;
    }
void push(int data){
    if(top>size){
        cout<<"stack overflow";
    }
   arr[++top]=data;
   cout<<data<<" "<<"is pushed into stack"<<endl;
}
int pop(){
    if(top<size){
        cout<<"stack underflow";
        return -1;
    }
    
    cout<<arr[top] <<" "<<"popped from stack"<<endl;;
    return arr[top--];
}
int peek(){
    if(!isEmpty()){
        return arr[top];
    }
    cout<<"stack empty"<<endl;
    return -1;
}
};
int main(){
    stack s1(5);
    s1.push(10);
    cout<<s1.peek()<<endl;
    s1.pop();
    s1.pop();

}