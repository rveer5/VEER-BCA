// reverse a string 
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    // string name="shivay";
    // reverse(name.begin(),name.end());           //   solution using build in algorithm in header file algorithm .
    // cout<<name;

    string str="veer";
    int n =str.length();
    int i=0;
    int j=n-1;
    while(i<j)  //The while loop runs as long as i is less than j. 
    {
        swap(str[i],str[j]);   //  swap function ,swaps the character at index i with the character at index j, then increments i and decrements j.
        i++;
        j--;


    }
    // cout<<str; 

    // //  illustration of how swapping function work.
    // string name1="shivay";
    // string name2="naman";
    // swap(name1,name2);
    // cout<<"After swaping\n";
    // cout<<"Name 1 ="<<name1;
    // cout<<"\nName 2 ="<<name2;


// using reverse loop .to reverse a string .

  string str2="thank you";
  int size=str2.length();
  for(int i=size-1;i>=0;i--)
  {
    cout<<str2[i];
  }


}

