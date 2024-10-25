//forward list are used to implement  singly linked list
// list are used to implement doubly linked list ,  include header file list.
#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    // forward_list<int>l;
    //  forward_list<int>l2={12,41,23,41};
    // l.assign(l2.begin(),l2.end()); //assign list to another list 
    // for(auto x:l){
    //     cout<<x<<endl;
    // }
    // l.remove(41); //removes the given values from the list whether it occurs 2 time or 3 times.
    // l.push_front(11);
    // l.pop_front();
    // for(auto x:l){
    //     cout<<x<<" ";
    // }

    // auto it=l2.insert_after(l2.begin(),12);  // it add the element as per the given location
    // it=l2.insert_after(it,{12,2,3});
    // it=l2.emplace_after(it,12);        //emplace_after is same as insert_after
    // it=l2.erase_after(it);        //it erases the element next to the given position
    // for(auto x:l2){
    //     cout<<x<<" ";
    // }

    //more fucntions
    // sort() fucntion is used to sort the given list
    //clear() clears the entire list
    //empty() return true is the list is empty else false 
    //reverse() reverse the elments of the list
    //merge() merge one list in another list(Works only for sorted list) l1.merge(l2); l2 will become empty after merging 

    // list have some more functions if compare to  forward_list .


//  list is different fron forward list.
// Some Basic Operations on list
    
// front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list.
// push_front() – Adds a new element ‘g’ at the beginning of the list.
// push_back() – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// insert() – Inserts new elements in the list before the element at a specified position.
// size() – Returns the number of elements in the list.
// begin() – begin() function returns an iterator pointing to the first element of the list.
// end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.

// check all the function on google gfg website = all functions are clearly explained .
    
}

// Points to Remember about List Container 

// It is generally implemented using a dynamic doubly linked list with traversal in both directions.
// Faster insert and delete operation as compared to arrays and vectors.
// It provides only sequential access. Random Access to any middle element is not possible
// It is defined as a template so it is able to hold any data type.
// It operates as an unsorted list would, which implies that by default, the list’s order is not preserved.
//  However, there are techniques for sorting