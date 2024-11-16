#include<iostream>
using namespace std;

int sumofnumber(int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum =sum +i;
    }
    return sum;
}

int main(){
    cout<<sumofnumber(10)<<endl;
}