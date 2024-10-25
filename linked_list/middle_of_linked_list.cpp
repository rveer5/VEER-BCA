#include<iostream>
using namespace std;

// reversing a linked list 
//easy code 

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
    if(head==NULL)
    {
        head=temp;

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
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}
int len(Node* &head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int middlevalue(Node* &head,int mid)
{
    Node* temp=head;
    int cnt=1;
    while(cnt<mid)
    {
        temp=temp->next;
        cnt++;

    }
    int ans=temp->data;
    return  ans;



}

int main()
{
    Node* head=NULL;
    insertAtHead(head,12);
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        insertAtHead(head,arr[i]);
    }
    print(head);
    int length=len(head);
    cout<<"Length of linked list : "<<length<<endl;
    int middle=(length/2)+1;
    int ans=middlevalue(head,middle);
    cout<<"Mid value of linked list is : "<<ans<<endl;










}

