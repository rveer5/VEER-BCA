#include<iostream>
using namespace std;
template<typename T>
T fun(T arr[],T n)
{
    T res=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
  

}
int main()
{
    float arr1[]={1.0,2.7,3.7,4.8,5,6.8};
    int size=sizeof(arr1)/sizeof(int);
    cout<<fun<float>(arr1,size);
    

}

