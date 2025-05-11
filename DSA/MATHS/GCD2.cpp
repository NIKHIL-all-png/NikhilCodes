#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    int a=48;
    int b=18;
    cout<<GCD(a,b);
}