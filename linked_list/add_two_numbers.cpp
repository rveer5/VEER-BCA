#include<iostream>
using namespace std;

// add two numbers, question pending.
// linked list  # first question


class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data=d;
        next=NULL;

    }

};
void insertAtHead(Node* &head,int value)
{
    Node* temp=new Node(value);
    temp->next=head;
    head=temp;
    

}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

    }
}
int main()
{
    Node* shivay=new Node(2);
    Node* head=shivay;
    insertAtHead(head,12);
    insertAtHead(head,89);
    print(head);



    



}