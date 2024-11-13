#include<iostream>
#include<vector>
using namespace std;
// find contiguous sub array first and last index which is equal to target element .
// imp.
vector<int> myarray(vector<int> arr2,int s,int num)
{
    vector<int> new_arr;
   for(int i=0;i<s;i++)
   {
    int current_sum=arr2[i];
    if(current_sum==num)
    {
        new_arr.push_back(i);
        new_arr.push_back(i);
        break;

    }
    else
    {
        for(int j =i+1;j<s;j++)
        {
            current_sum+=arr2[j];
            if(current_sum==num)
            {
                new_arr.push_back(i);
                new_arr.push_back(j);
                return new_arr;
                // break;
            }

        }
    }
    // break;
   }
//    return new_arr;
}
int main()
{
    vector<int> ans;
    int result;
    vector<int> arr={1,2,3,4,5,6,7,8};
    int Size=arr.size();
    int target=10;
    ans=myarray(arr,Size,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"   ";
    }
    
}
