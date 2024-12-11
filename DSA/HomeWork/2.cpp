#include<iostream>
using namespace std;
int bin(int n){
    int l=n;
    int d;
    int bi=0;
    while(l != 0 ){
        d=l%2;
        bi=(10*bi)+d;
        l=l/2;
    }
    return bi;
}

int sets(int n){
    int p=0;
    int m=bin(n);
    int c;
    while(m != 0){
        c=m%10;
        if(c==1){
            p=p+1;
        }
        m=m/10;
    }
    return p;
}
int Num(int a, int b){
    int a1=sets(a);
    int a2=sets(b);
    int sum=a1+a2;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Answer"<<Num(a,b)<<endl;
    return 0;
}