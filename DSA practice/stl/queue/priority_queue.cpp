// Difference between Priority Queue and Normal Queue?
// There is no priority attached to elements in a queue, 
// the rule of first-in-first-out(FIFO) is implemented whereas, in a priority queue, the elements have a priority.
// The elements with higher priority are served first.

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,8,5,7,9};
    int n=5;
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n); //To get in ascending order use this syntax
    //priority_queue<int>pq(arr,arr+n);            // by default priority queue is in descending order and it is known as max heap .
    while(pq.empty()==false)
    {
 
        cout<<pq.top();
        pq.pop();
        cout<<"  ";
       
    }
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]=pq.top();
    //     pq.pop();
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"  ";

    // }
    // return 0;


}   

