#include<iostream>
using namespace std;
 int Nth(int n){
    int p;
    for(int i=1;i<=n;i++){
        p=(3*i)+7;
    }
    return p;
 }
 int main(){
    int n;
    cin>>n;
    int p=Nth(n);
    cout<<p<<endl;
 }