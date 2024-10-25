#include<iostream>
using namespace std;
int shivay(int a,int b)              // function overloading example.
{                                       
    return a+b;                         // same function name with different parameters

}
float shivay(float a,float b)
{
    return a+b;
}
int shivay(int a,int b,int c)
{
    return a+b+c;
}
int main()
{

    cout<<shivay(5,10);
    cout<<shivay(1.2f,4.3f);
    cout<<shivay(1,2,3);



}