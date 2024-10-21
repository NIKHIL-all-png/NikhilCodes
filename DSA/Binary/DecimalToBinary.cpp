#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n=2;
    int ans=0;//binary number
    int rem;
    int pow=1;
    int qu;
    while(n>0){
        rem= n%2;
        qu=n/2;
        ans=ans+rem*pow;
        n=qu;
        pow=10*pow;
    }
    cout<<ans<<endl;
    
    
}