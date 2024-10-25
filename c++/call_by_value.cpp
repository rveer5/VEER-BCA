// code for call by value or pass by value
// explaination in notes or use chat gpt.


#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
    int x=8,y=9;
    swap(x,y);
    cout<<x<<" "<<y;

}