// hashing is the second most used data structure after array .
// hashing may lead to collision handling .then we use one of the following method to overcome collission.
//  1 st is chaining 2nd is open addressig.
// open addressing include = linear probling,quadratic probling,double hashing.
// in these example collision is happening and we would be using chaining.

// More detail notes in notebook .

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class shivay
{
    public:
    int bucket;
    list<int>*table;

    shivay(int b)
    {
        bucket=b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%bucket;
        table[i].push_back(key);

    }
    void remove(int key)
    {
        int i=key%bucket;
        table[i].remove(key);

    }
       bool search(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
           if (x == key)
              return true;
        return false;      
    }

};
int main()
{
    shivay s(7);
    s.insert(10);
    s.insert(20);
    s.insert(15);
    s.insert(7);
    cout << s.search(10) << endl;
    s.remove(15);
    cout <<s.search(15);
    
}