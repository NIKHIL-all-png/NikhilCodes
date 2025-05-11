#include<iostream>
#include<math.h>
using namespace std;
int GCD(int a,int b){
    while(b != 0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a=48;
    int b=18;
    int p=GCD(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<"is : "<<p<<endl;
}