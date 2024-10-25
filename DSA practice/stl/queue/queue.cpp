// Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.
// Elements are inserted at the back (end) and are deleted from the front.
// Queues use an encapsulated object of deque or list (sequential container class) as its underlying container,
// providing a specific set of member functions to access its elements.

// Reverse first k items of a queue.
#include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;
int main()
{
    deque<int>demo={10,20,30,40,50};         // this shows that queue is a container adaptor and can work with other stl also.
    queue<int>q(demo);
    int k=3;
    stack<int>s;

    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();

    }
    for(int i=0;i<k;i++)
    {
        q.push(s.top());
        s.pop();

    }
    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<"  ";
        q.pop();
    }



    

    
}
