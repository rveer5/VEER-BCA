#include<iostream>
using namespace std;
class Node
// code to reverse a linked list .
// Iterative solution .
// Time complexity = O(n)

// recursive solution is also possible but not tried.
{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
   
};
void insertAtHead(Node* &head,Node* &tail,int d)
{
    Node* temp=new Node(d);
    if(head==NULL)
    {
        head=temp;
        tail=temp;

    }
    else{
    temp->next=head;
    head=temp;
    }
    
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        insertAtHead(head,tail,arr[i]);
        
    }
    
    // cout<<"Simple linked list :"<<endl;
    // print(head);
    // cout<<"Reversed linked list is:"<<endl;
    // reverse(head);
    // print(head);                             reversing a linked list .






}