#include<iostream>
using namespace std;
class shivay
{
    public:
    shivay(int s=2,int g=3)
    {
        cout<<"shivay hindwani";
;


  
    }

};

int main()
{
    shivay p;
    // shivay p();  = compiler interprets p as function name with return type class name that is shivay 
// When you write shivay p();, it's actually declaring a function named p that takes no arguments and returns a shivay object. 
// This is known as the "most vexing parse" in C++, where the compiler interprets p as a function declaration rather than an object declaration.
// To create an object of type shivay using the default constructor, you should simply write: shivay p;   
   
}
// shivay p; = creating object p with default arguments.
// In the main() function, you create an object p of type shivay without providing any arguments
// Since no arguments are provided explicitly, the default values 2 and 3 are used for s and g respectively.

// Therefore, when the constructor is called to create object p, the output "shivay hindwani" will be printed