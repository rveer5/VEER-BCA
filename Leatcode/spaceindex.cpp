#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    string s="heyveerpapa";
    vector<int>spaces{3,7};
    string result;
    int spaceindes=0;
    for(int i=0;i<s.size();i++){
        if(spaceindes<spaces.size()&&i==spaces[spaceindes]){
            result+=' ';
            spaceindes++;
        }
        result+=s[i];
    }
    cout<<result;
}