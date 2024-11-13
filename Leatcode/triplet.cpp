#include<iostream>
using namespace std;
#include<vector>
int main()

// triplet in array that makes the targetted value .
// not  an  optimized solution .

{
    vector<int> arr={1,2,3,4,5};
    vector<int> new_arr;
    // vector<int> ans;
    int Size=arr.size();
    int element;
    int element2;
    int target=12;
    for(int i=0;i<Size-2;i++)
    {
        element=arr[i];
        for(int j=i+1;j<Size-1;j++)
            {
                element2=arr[j];
                for(int k=j+1;k<Size;k++)
                {
                    if(element+element2+arr[k]==target)
                    {
                    new_arr.push_back(element);
                    new_arr.push_back(element2);
                    new_arr.push_back(arr[k]);
                    }
                    
                  
                }
            }
    }
    if(new_arr.size()==0)
    {
        cout<<"No triplet found!"<<endl;
    }
    
    for(int i=0;i<new_arr.size();i++)
    {
        cout<<new_arr[i]<<"   ";
    }



    



    


  
}





