#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
    int count=0;
    string details[] ={"7868190130M7522","5303914400F9211","9273338290F4010"};
    for(int i=0;i<3;i++){
        for(int j=11;j<12;j++){
            if(stoi(details[j])>6&&stoi(details[j+1])>0){
                count++;
            }

        }
    }
    cout<<count;
}
