#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> arr={1,2,3,4,5};
    vector<int> new_arr;
    vector<int> ans;
    int Size=arr.size();
    int element;
    int target=5;
    for(int i=0;i<Size-1;i++)
    {
        element=arr[i];
        for(int j=i+1;j<Size;j++)
            {
                if(element+arr[j]==target)
                {
                    if(element<arr[j])
                    {
                    new_arr.push_back(element);
                    new_arr.push_back(arr[j]);
                    }else
                    {
                    new_arr.push_back(arr[j]);
                    new_arr.push_back(element);

                    }
                    



                }
            }
    }
    for(int i=0;i<new_arr.size();i++)
    {
        cout<<new_arr[i]<<"   ";
    }

    



    


  
}





