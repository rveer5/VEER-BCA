#include<iostream>
using namespace std;
int main()
{
    // doing in dynamic memory . just to practice .
    int* arr=new int[6];
    cout<<"'enter array elements :"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<6;j+=2)
    {
        if(j+1<6)
        {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }



    }

for(int i=0;i<6;i++)
{
    cout<<arr[i]<<"  ";
}
delete[]arr;



}