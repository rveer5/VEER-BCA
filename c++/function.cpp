// #include<iostream>
// using namespace std;

// int shivay()                      // simple function program.
// {
//     int a=5,b=4;
//     return a+b;

// }

// int main()
// {
//     int c;
//     c=shivay();
//     cout<<c;

// }

// #include<iostream>
// using namespace std;;
// int shivay(int x,int y)           // formal parameter
// {
//     return x+y;
// }

// int main()
// {
//     int c=shivay(5,5);            // actual parameter 
//     cout<<c;
// }
#include<iostream>
using namespace std;
int add(int x=4,int y=5,int z=6)
{
    cout<<"shivay hindwani";
    return x+y+z;

}
int main()
{
    cout<<add();
    
}

// 
// Your code defines a function add that takes three integer parameters with default values (4, 5, and 6). 
// When you call the add function without providing any arguments, the default values will be used for all parameters.  