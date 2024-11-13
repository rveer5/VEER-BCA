    #include<iostream>
    #include<vector>
    #include<stack>
    using namespace std;
    int main(){
        vector<int>v{1,2,3,4,5};
        int sum=0;
         if(v[0]!=v[1]){
                sum+=v[0];
            }
        for(int i=1;i<=v.size()-2;i++){
           
            if(v[i]!=v[i-1]&&v[i]!=v[i+1]){
                sum+=v[i];
            }
            
        }
        if(v[v.size()-1]!=v[v.size()-2]){
            sum+=v[v.size()-1];
        }
        cout<<sum;
        return 0;
    }
