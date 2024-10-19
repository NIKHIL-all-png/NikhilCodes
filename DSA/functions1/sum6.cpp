#include<iostream>
using namespace std;

int digitsum(int x){
    int sum =0;
    while(x>0){
        int lastdigit=x % 10;
        int x=x/10;
        sum =sum + lastdigit;
    }
    return sum;
}

int main(){
    cout<<digitsum(123)<<endl;
    return 0;
}