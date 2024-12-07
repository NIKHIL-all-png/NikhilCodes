#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=100;
    int sum=0;
    int c=0;
    int p;
    while(n!=0){
        p=n%10;
        sum = p*(pow(2,c))+sum;
        n=n/10;
        c++;
    }
    cout<<sum;
    return 0;
}