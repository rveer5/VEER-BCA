// Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
// The values are stored in a specific sorted order i.e. either ascending or descending.

// there is unordered set also .
#include<iostream>
#include<string.h>
#include<set>
using namespace std;
int main()
{
    set<int>num={4,1,9,5,44,1,76,34};   // all values will be in sorted order by default ascending , to get in descending order ,syntax below.

     for(auto x:num)
    {
        cout<<x<<"  ";
    }

   
    set<int,greater<int>>num1={2,4,6,8,9,4,3,5,7,45,8,234,67}; // in descending order.  At the time of declaration you need to specify the order
    cout<<"\n";                                                // in you want either asc. or des.
     for(auto x:num1)
    {
        cout<<x<<"  ";
    }

}