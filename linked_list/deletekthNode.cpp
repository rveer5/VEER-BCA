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

};

void InsertATHead(Node* &head,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    

}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

    
}
void reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    head=prev;
}
void deleteNode(Node* &head, int k){
    if(k==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        Node* prev=NULL;
        Node* curr=head;
        while(cnt<k){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

int main()
{
    Node* tail=NULL;
    Node* head=NULL;
    InsertATHead(head,3);
    InsertATHead(head,1);
    print(head);
    reverse(head);
    print(head);
    deleteNode(head,1);
    InsertATHead(head,3);
    InsertATHead(head,2);

    print(head);
    cout<<tail->data;
    cout<<endl;
    cout<<head->data;
}