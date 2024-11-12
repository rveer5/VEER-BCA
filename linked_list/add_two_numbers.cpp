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
void reverse(Node* &head)   // reverse a linked list .
{
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    } 
    head=prev;

}
int add(Node* &head1, Node* &head2) {
    Node* head3 = NULL;
    int carry = 0;
    
    while (head1 != NULL || head2 != NULL) {
        int sum = carry;
        
        if (head1 != NULL) {
            sum += head1->data;
            head1 = head1->next;
        }
        
        if (head2 != NULL) {
            sum += head2->data;
            head2 = head2->next;
        }
        
        carry = sum / 10;
        int value = sum % 10;
        
       
        insertAtHead(head3, value);
    }

    
    if (carry > 0) {
        insertAtHead(head3, carry);
    }
   reverse(head3);
   print(head3);
    return 0; 
}


int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    Node* head3=NULL;
    insertAtHead(head1,2);
    insertAtHead(head1,4);
    print(head1);
    cout<<endl;
    insertAtHead(head2,1);
    insertAtHead(head2,3);
    print(head2);
    cout<<endl;
    add(head1,head2);



    



}