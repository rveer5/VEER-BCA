#include<iostream>
using namespace std;
int main()
{
    // finding unique element in the array where the other elements are repeating 2 times ,and one element will occur one time  only 
    // we need to find that one element .

    // XOR operator is used as it cancels the same elements and return the unique element 
    // notes dsa notebook .
int size;
cout<<"Enter the size of array: "<<endl;
cin>>size;
int unique=0;
int* arr=new int[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}

for(int i=0;i<size;i++)
{
    unique=unique^arr[i];
    
}
cout<<"unique element is : "<<unique<<endl;

delete[] arr;






    



}