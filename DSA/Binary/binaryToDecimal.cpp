#include<iostream>
#include<cmath>
using namespace std;

int binaryTOdecimal(int binary){
    int pow=1;
    int ans=0;//decimal number
    int rem;
    while(binary>0){
        rem=binary%10;
        binary=binary/10;
        ans=ans+rem*pow;
        pow=2*pow;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter any number n=";
    cin>>n;
    cout<<binaryTOdecimal(n)<<endl;
    return 0;
}