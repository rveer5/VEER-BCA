// #include<iostream>
// #include<typeinfo>
// using namespace std;

// int main()
// {
//     int num;
//     num=67;
//     cout<<num<<"\n";
//     cout<<typeid(num).name();   // syntax to check datatype of a variable
// }

#include<iostream>                //  use of constructor and destructor syntax
using namespace std;
class test
{
    public:
    test()
    {
        int n=10;
        cout<<"\n"<<n;
    }
    ~test()
    {
        cout<<"\nobject destroyed";
    }

};
int main()
{
    test t,tr;
}

