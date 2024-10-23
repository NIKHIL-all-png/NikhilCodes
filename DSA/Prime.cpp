#include<iostream>

using namespace std;

int primeORnot(int num){
    bool isprime=true;
    if(num<=1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<primeORnot(3)<<endl;
}