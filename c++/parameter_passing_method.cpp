#include<iostream>
using namespace std;                  // pass by value

// void swap(int x,int y)                // defination and clear explanation in notes.
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;

// }
// int main()
// {
//     int a=10,b=30;
//     swap(a,b);

//     cout<<a<<" "<<b;

// }

// void swap(int *a,int *b)                // pass by address  
// {                                       // defination in notes 
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int x=10,y=20;
//     swap(&x,&y);
//     cout<<x<<" "<<y;
// }

void swaping(int &x,int &y)             // pass by reference  
{                                       // defination in notes.
    int temp;
    temp=x;
    x=y;
    y=temp;

}
int main()
{
    int a=90,b=30;
    swaping(a,b);

    cout<<a<<" "<<b;

}