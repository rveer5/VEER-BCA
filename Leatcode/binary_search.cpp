#include<iostream>
using namespace std;
#include<vector>
int main()
// two pointer approach 

{
    vector<int> arr={1,2,3,4,5,6,7,8};
    int Size=arr.size();
    int low=0;
    int high=Size-1;
    int mid;
    int target;
    cout<<"enter the element to search :"<<endl;
    cin>>target;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==target)
        {
            cout<<"Element found at index : "<<mid<<endl;
            break;
        }
        else if(target<arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
