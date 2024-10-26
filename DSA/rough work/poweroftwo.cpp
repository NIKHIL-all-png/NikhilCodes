#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number n=";
    cin>>n;

    // To check if a Number is power of two
    if(n>0 && (n & (n-1))==0){
        cout<<"number is power of two";
    }
    else{
        cout<<"number is not a power of 2";
    }
    cout<<endl;

}