// left shift the array by one 
#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    // position to shift the array by  1 and 2 
    // user will enter the position to shift the array # specified 
  
   int n; 
   cout<<"Enter the size of array :"<<endl;
   cin>>n;
   cout<<"Enter the elements of array : "<<endl;

   int arr[n];
   
   for(int k=0;k<n;k++)
   {
    cin>>arr[k];
   }
   cout<<"Position to shift the array by : ";
   int p;
   cin>>p;
   cout<<endl; 
   
   int temp=arr[0];
   int temp2=arr[1];
   for(int i=0;i<n-p;i++)
   {
    arr[i]=arr[i+p];
   }
   while(p==1)
   {
    arr[n-1]=temp; 
    break;
   }
   
   
   while(p==2)
   {
    arr[n-2]=temp;
    arr[n-1]=temp2;
    break;
    
   }

   for(int j=0;j<n;j++)
   {
    cout<<arr[j]<<"  ";
   }


}