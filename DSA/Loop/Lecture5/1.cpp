#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=4;
    //int p;
    int sum=0;
    int c=1;
    while(n != 0){
        int p=n & 1;
        sum=(c*p)+sum;
        n=n>>1;
        c=c*10;
    }
    cout<<sum<<endl;
    return 0;
}