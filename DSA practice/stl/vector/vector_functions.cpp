#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v{10,20,440,60};
    // v.pop_back();                         // pop_back function remove last element of the vector.
    // for(auto x:v)
    // {
    //     cout<<x<<"  ";
    // }
    // cout<<"\n"<<v.front();                     // front display first element of the vector 
    // cout<<"\n"<<v.back();                       // back display last element of the vector 
    // v.front()=20;                                // we can change first element value using front function
    // cout<<"\n"<<v.front()<<"\n";

    // v.insert(v.begin()+2,6);                      // insert function insert any element at a specified position .
    //  for(auto x:v)
    // {
    //     cout<<x<<"  ";
    // }

    // v.erase(v.begin(),v.end()-1);             // erase element from the given location .
    // // v.clear();                                // clear all element from the vector 
    // v.resize(5,10);                              // resize function resize the vector to any number , and also add default value to it 

// we can pass vector to funtions .and can change theie actual value using reference and address ,if we just pass vector to function 
// using pass by value their will be no change to actual parameters 
// check lecture gfg fourth video = time complexity in stl that is vector .

// vector<int>v;                // this is a dynamic array. not a dynamic allocated array
// for(int i=1;i<7;i++)
// {
//     v.push_back(i);          // int*ptr = new int[n];  This is a dynamic allocated array . where it is necssary to mention the size.
// }
// for(auto x:v)
// {
//     cout<<x<<"  ";
// }
 
vector<int>v;
v.push_back(15);
v.push_back(10);   
v.push_back(5);
v.push_back(4);
v.push_back(40);
cout<<v.size()<<endl;      // size show the total occupied space by the elements
cout<<v.capacity()<<endl; //capacity show the total available storage in dynamic array
// each time we add a new element in the array , and that array is already full. Then it doubles its capcity automatically .


}