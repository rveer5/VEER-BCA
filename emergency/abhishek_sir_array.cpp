#include<iostream>
using namespace std;
#include<vector>
// given an array print all the element which have ATLEAST 1 element in their right side with  greater value .
int main()
{
    
    vector<int>v{9,17,10,15,13,5,4,6,2,3,1};
    vector<int>ans;
    int n=v.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]<v[j])
            {
                ans.push_back(v[i]);
                break;

            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"  ";

    }

// These Solution has a time complexity of O(n square 2)

// try to do this in O(n).

}