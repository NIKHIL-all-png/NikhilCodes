#include<iostream>
using namespace std;

bool isprime(int num){
    if(num<=1)
    return false;//number less than and equal to 1 are not prime
    for(int i=2;i*i<=num;i++){
        if(num % i==0)//number is divisible by any number other than 1 and itself
        return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"enter a number";
    cin>>num;

    if (isprime(num)){
    cout<< num << "is a prime number"<<endl;
    }else{
    cout<<num<< "is not a prime number"<< endl;
    }
}