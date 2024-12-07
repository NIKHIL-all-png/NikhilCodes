#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int a=fact(n);
    int b=fact(r);
    // int d=n-r;
    int c=fact(n-r);
    float p=a/(b*c);
    return p;
}
int main(){
    int n, r;
    cin>>n>>r;
    float d=nCr(n,r);
    // int a=fact(n);
    // int b=fact(r);
    // // int d=n-r;
    // int c=fact(n-r);
    // float p=a/(b*c);
    cout<<"Combination is equal to"<<d;
    return 0;
}