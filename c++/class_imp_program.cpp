#include<iostream>
using namespace std;
class rectangle
{
    private:                        // data of a class should be set as private.
    int lenght;
    int breadth;

    public:                        // functions should be set as public.
    void setlenght(int l)
    {
        lenght=l;
    }
    void setbreadth(int b)
    {
        breadth=b;

    }
    int getlenght()
    {
        return lenght;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return lenght*breadth;
    }
    int perimeter()
    {
    return 2*(lenght+breadth);
    }

};

int main()                   // more details in notes .
{
    rectangle r1;
    r1.setlenght(10);
    r1.setbreadth(5);
    cout<<r1.area();
    cout<<r1.getlenght();

    return 0;
}