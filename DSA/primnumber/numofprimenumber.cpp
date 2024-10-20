#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num){
    if(num<2)
    return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num % i==0)
        return false;
    }
    return true;
}

void printprimes(int num){
    for(int i=1;i<=num;i++){
        if(isprime(i))
        cout<<i<<" ";
    }
}

int main(){
    printprimes(10);
    cout<<"number of prime number between 1 and"<<endl;
}
