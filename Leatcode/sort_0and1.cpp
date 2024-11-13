// sort 0 and 1
// using 2 pointer approach .

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    // the array can hold only these 3 conditions 
    // updating each pointer or index each time we enter inside the condition  in imp.
    
    vector<int> arr={0,1,0,1,1,0,1,1,1,0,0,1,0,1,0};
    int Size=arr.size();
    int first=0;
    int last=Size-1;
    while(first<last)
    {
        if(arr[first]==0)
        {
            first++;
        }
        else if(arr[last]==1)
        {
            last--;
        }
        else{
            swap(arr[first],arr[last]);
            first++;
            last--;
        }
        
    }
    for(int i=0;i<Size;i++)
    {
        cout<<arr[i]<<"  ";
    }


}