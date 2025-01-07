#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void repeat(string s){
    unordered_map<char, int> count;
    for(char c:s){
        count[c]++;
        if(count[c]>1){
            cout<<c;
            return;
        }
    }

}
int main(){
 string s="vere";
 repeat(s);
}