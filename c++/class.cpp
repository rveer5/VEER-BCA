
// Creating a class in C++ involves defining a blueprint for an object that encapsulates both data (attributes or properties) and operations
// (methods or functions) that can be performed on that data





// #include<iostream>
// using namespace std;
// class rectangle                               // defining a class
// {
//     public:
//     int lenght;                               // data of a class
//     int breath;


//     int area()                                // functions of a class
//     {
//         return lenght*breath;
//     }
//     int perimeter()
//     {
//         return 2*(lenght+breath);
//     }

// };                                            // ending of a class should be done with semi colon ; 

// int main()
// {
//     rectangle r1,r2;                          // creating object of a class , using class datatype.
//     r1.lenght=10;
//     r1.breath=5;
//     cout<<"area is ="<<r1.area();             // calling a function of r1 object.
//     cout<<"\n";
//     cout<<"perimeter is ="<<r1.perimeter();   // calling a function of r1 object.
    

//     r2.lenght=15;
//     r2.breath=10;
//     cout<<"\n \n";
//     cout<<"area is : "<<r2.area();           // calling a function of r2 object.
//     cout<<"\n";
//     cout<<"Perimeter is : "<<r2.perimeter(); // calling a function of r2 object.

// }


// pointer to an object

#include<iostream>
using namespace std;
class rectangle                               // defining a class
{
    public:
    int lenght;                               // data of a class
    int breath;


    int area()                                // functions of a class
    {
        return lenght*breath;
    }
    int perimeter()
    {
        return 2*(lenght+breath);
    }

};
int main()
{
    rectangle r1;                             // accessing object using a pointer .
    rectangle *ptr;
    ptr=&r1;
    ptr->lenght=10;
    ptr->breath=5;
    cout<<ptr->area();
    cout<<"\n";
    cout<<ptr->perimeter();
} 







