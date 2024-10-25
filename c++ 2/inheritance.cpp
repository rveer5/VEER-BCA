#include<iostream>
using namespace std;
class base                // base class
{
    public:                  // private data member of base class cannot be inherited in derived class .
    int y=20;
    public:
    void show()
    {   int x=10;
        cout<<x;
    }
};
class shivay:public base         // shivay class is a inheritance ,all functions and data of base class will come in  shivay class 
{   
    public:
    void show()
    {
        cout<<"\n"<<y;        
    }
    
};
int main()
{
    base b;
    b.show();
    shivay s;
    s.show();

}