#include<iostream>
#include<vector>
using namespace std;

 class Node
{
    public:
    int data;   // data part of the node
    Node* next; // pointer to the next node in the linked list

    Node(int value)  // constructor 
    {
        data=value;
        next=NULL;
    }
    // destructor
    ~Node()
    {
        int value=this->data;
        cout<<"memory  is deleted for: "<<value<<endl;
        
    }

};

void insertAtHead(Node* &head,Node* &tail,int d) // inserting elements in starting 
{
    Node* temp=new Node(d);
    if(head==NULL)
    {
        
        head=temp;
        tail=temp;
    }
    else{
    temp -> next=head;
    head=temp;
    }
}


void print(Node* &head)   // function to print values of elements. 
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp ->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}
void insertAtTail(Node* &tail,Node* &head,int d)  // inserting values at last 
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}
void insertAtMiddle(Node* &tail,Node* &head,int loc,int d){ // inserting elements at any specified position .
// this function hold two imp. conditions 
// first = when location is 1 , we will call insertAtHead  function and will return to end the function.
// second = if the last node is pointing to null we will call insertAtTail function and will return, to end the function .
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
    if(temp->next==NULL)   // inserting  at last place.
    {
        insertAtTail(tail,head,d);
        return;
        
    }
    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;


}
void deletenode(int post,Node* &head)  // deleting node using position .
{
    // deleting first or  starting node
    if(post==1)
    {
        Node* temp=head;
        head=head->next;
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
    


    
}
void deletevalue(Node* &head,int value) // deleting node using value. 
{
    Node* temp=head;
    if(temp->data==value)
    {
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    // Node* prev=NULL;
    // Node* curr=head;

    Node* prev=head;
    temp=temp->next;
    while(temp!=NULL)
    {
        if(temp->data==value)
    {
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
        return;


    }
    prev=prev->next;
    temp=temp->next;
    }

  
   

}




int main()
{
     
    Node* node1=new Node(20);   // creation of node   
    // cout<< node1->data <<endl;
    // node1->next=new Node(30);
    Node* head=node1;  // this is a head node that stores the address of given node or 
    // head is pointing to node1.
    // cout<<head->data<<endl;
    Node* tail=node1;
    
    
    print(head);  
    // cout<<node1->next<<endl;
    // cout<<node1->next->data<<endl;

    // insertAtHead(head,12);
    // insertAtHead(head,100);
    // cout<<head->data<<endl;
    // print(head);

    // insertAtTail(tail,head,10);
    // insertAtTail(tail,head,50);
    // print(head);
    // insertAtMiddle(tail,head,4,19);
    // print(head);
    // insertAtTail(tail,head,120);
    // print(head);


    // checking our haid and tail after so many function call.
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // deletenode(1,head);
    // print(head);
    // cout<<"Head : "<<head->data<<endl;
    // cout<<"Tail : "<<tail->data<<endl;
    // deletevalue(head,120);
    // print(head);
   

   




    







   


}

