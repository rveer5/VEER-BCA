// Maps are associative containers that store elements in a mapped fashion. 
// Each element has a key value and a mapped value.
// No two mapped values can have the same key values.

// code 


#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m; // creation  of map without elements.
    cout<<m.size()<<"\n";   //checking size of the map .
    m[1]="shivay";    // adding elements to map i.e m .
    m[2]="rahul";
    m[3]="veer";
    // another way to insert element is =
    m.insert({4,"himanshu"});
    cout<<"before erase :\n";
    for(auto i:m)
    {
        cout<<i.first<<"  "<<i.second<<endl;

    }
    // first  give key of the map 
    //second give the value associated with that key in map.
    cout<<"Finding 4 key element : "<<m.count(4);  // count return answer in 
    // boolean value . that is 0 or 1 .
    // if index  value is presemt it will return true if not present it 
    // will return false that is 0
    cout<<endl;
    m.erase(4); // will delete element of specified index .
    cout<<"After erase : "<<endl;

     for(auto i:m)
    {
        cout<<i.first<<"  "<<i.second<<endl;

    }
    cout<<endl;

m.find(3);  // didn't understood this function check in gfg once and write the code here .











}