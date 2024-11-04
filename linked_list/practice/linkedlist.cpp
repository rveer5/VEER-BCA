#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;

    }

    
};
void insertathead(Node* &head,int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }
int main(){
    Node* node=new Node(1);
    Node* head=node;
    cout<<head->data<<endl;
    insertathead(head,10);
    cout<<head->data;
    
}