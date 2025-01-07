#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    if(n<1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=4;
    if(prime(6)){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";
    }
    
}