#include<iostream>
#include<cmath>
using namespace std;

void fab(int n){
    int a=0;
    int b=1;
    int nexterm;
    cout<<a<<" "<<b;
    for(int i=1;i<=n;i++){
        nexterm=a+b;
        cout<<" "<<nexterm;
        a=b;
        b=nexterm;
    }
}

int main(){
    int n=10;
    fab(n);
    return 0;
}