#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(13);
    v.push_back(15);
    for(auto x:v)
    {
        cout<<x<<"  ";                // we can use conventional loop , The loop which we use always.
    }
    cout<<"\n"<<"Size of vector array is :";
     int size=v.size();                         // checking size of vector .
    cout<<size;

    return 0;

   

}