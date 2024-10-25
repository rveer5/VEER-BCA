#include<iostream>
using namespace std;
#include<vector>
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
int  main()
{
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* head=node1;
    Node*head2=node2;
    cout<<head<<endl;
    cout<<head2->data<<endl;
    



}
