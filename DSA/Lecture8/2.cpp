#include<iostream>
using namespace std;
bool isEVEN(int n){
    if(n%2==0){
       return 1;
    }
    else{
        return 0;   
    }
}
int main(){
    int n;
    cin>>n;
    cout<<isEVEN(n);
    return 0;
}