#include<iostream>
using namespace std;
void isprime(int n){
    int p=1;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            p=0;
            break;
        }
        
    }
    if(p==0){
        cout<<"Not a prime number";
    }
    else if(p==1){
        cout<<"Number is  a prime number";
    }
}
int main(){
    int n;
    cin>>n;
    isprime(n);
    return 0;
}