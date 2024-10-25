#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }

    // destructor
    ~Node()
    {
        int value=this->data;
        cout<<"Memory is deleted for : "<<value<<endl;

    }

};
void insertnode(Node* &tail,int element,int d)
{
    // empty list
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        // non empty list 
        //assuming that the element is present in the list .
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        // element found -> current is representing element wala node.
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}
void print(Node* tail)
{
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main()
{
    Node* tail=NULL;
    insertnode(tail,2,10);
    print(tail);
    insertnode(tail,10,30);
    print(tail);

//circular singly  linked list and 
// circular doubly linked  list 
// not understood well .
// watch again , try again  , loop will end itself.


}