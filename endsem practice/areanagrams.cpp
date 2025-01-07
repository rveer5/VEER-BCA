#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool areanagrams(string str1, string str2){
    if(str1.length()!=str2.length())
        return false;
    unordered_map<char,int>freq;
    for(auto x:str1 ){
        freq[x]++;
    }
    for(auto x:str2){
        freq[x]--;
        if(freq[x]<0){
        return false;
    }
    }
    return true;
}
int main(){
    string str1="veec";
    string str2="reet";
    if(areanagrams(str1,str2)){
        cout<<"are anagrams";
    }
    else{
        cout<<"not a anagrams";
    }

}