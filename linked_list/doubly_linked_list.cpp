#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) // constructor 
    {
        data = d;
        next=NULL;
        prev=NULL;
        


    }
  
  
};
void print(Node* &head)  // traversing the linked list .
{
    Node* temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
void insertAtHead(Node* &head,Node* &tail,int value) // inserting elements in the  linked list.
{
    if(head==NULL)
    {
        Node* temp=new Node(value);
        head=temp;
        tail=temp;
    }
    Node* temp=new Node(value);
    temp->next=head;
    head->prev=temp;
    head=temp;


}
int len=0;
int length(Node* &head) // checking size of the linked list . 
{
    Node* temp=head;
    while(temp!=0)
    {
        len++;
        temp=temp->next;

    }
    return len;
}
void insertAtTail(Node* &tail,Node* &head,int value)
{
    if(tail==NULL)
    {
        Node* temp=new Node(value);
        tail=temp;
        head=temp;
    }
    Node* temp=new Node(value);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
void insertAtPosition(Node* &head,Node* &tail,int loc,int d)
{
    if(loc==1) // inserting at first place .
    {
        insertAtHead(head,tail,d);
        return;
    }
   
    Node* temp=head;
    int cnt=1;
    while(cnt<loc-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)   // inserting  at last place or tail .
    {
        insertAtTail(tail,head,d);
        return;
        
    }
    Node* newnode=new Node(d); // inserting somewhere at middle position .
    newnode->next=temp->next;
    temp->next->prev=temp;
    newnode->prev=temp;
    temp->next=newnode;
    

}
void deletenode(int post,Node* &head)  // deleting node using position .
{
// deleting first or  starting node
if(post==1)
{
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;


}
else{
    // deleting any  element from middle or last
    Node* prev=NULL;
    Node* curr=head;
    int cnt=1;
    while(cnt<post)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    // prev->next=curr->next;
    // curr->next->prev=prev;
    // curr->next=NULL;
    // curr->prev=NULL;
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
}
int main()
{
    Node* shivay=new Node(10);
    Node* head=shivay;
    Node* tail=shivay;
    insertAtHead(head,tail,20);
    print(head);
    cout<<"length of linked list is : "<<length(head)<<endl;
    insertAtTail(tail,head,11);
    print(head);
    insertAtPosition(head,tail,3,5);
    print(head);
    cout<<"shivay"<<endl;
    cout<<"head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    cout<<"naman"<<endl;
    deletenode(4,head);
    print(head);
    cout<<tail->data<<endl;










   
}