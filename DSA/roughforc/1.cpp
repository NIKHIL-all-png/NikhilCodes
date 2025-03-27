#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=25;
    int b=n*n;
    int d;
    int sum=0;
    int p=1;
    while(n>0){
        d=b%10;
        sum=(10*d)+sum;
        if(sum==n){
            p=-1;
            break;
        }
        b=n%10;
    }
    if(p==1){
        cout<<"Not a automorphic number"<<endl;
    }else if(p==-1){
        cout<<"automorphic number"<<endl;
    }
    return 0;
}