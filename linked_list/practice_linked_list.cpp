#include<iostream>
using namespace std;

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
    void insertAtHead(Node* &head,int d)
    {
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;

    }
    void insertAtTail(Node* &tail,int d)
    {
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;


    }
    void print(Node* &head)
    {
        Node* temp=head;
        while(temp!=0)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtMiddle(Node* &head,Node* &tail,int loc,int d)
    {
    if(loc==1)
    {
        insertAtHead(head,d);
        return;
    }
        Node* temp=head;
        int cnt=1;
        while(cnt<loc-1)
        {
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL)
        {
            insertAtTail(tail,d);
            return;
        }
        Node* newnode=new Node(d);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    

};
int main()
{
    Node* shivay= new Node(10);
    Node* head=shivay;
    Node* tail=shivay;

    head->insertAtHead(head,20);
    head->insertAtHead(head,30);
    // head->insertAtTail(tail,50);
    // head->insertAtTail(tail,100);
    shivay->print(head);
    shivay->insertAtMiddle(head,tail,4,70);
    shivay->print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;



    
    
}
