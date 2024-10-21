#include<iostream>
using namespace std;

int decTOBinary(int decNum){
    int ans=0;//Gives the value of binary number
    int pow=1;
    int rem;
    while(decNum > 0){
        rem=decNum%2;
        decNum=decNum/2;
        ans=ans+rem*pow;
        pow=10*pow;
    } 
    return ans;
}

int main(){
    int n;
    cout<<"entyer any decimal number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<< decTOBinary(i)<<endl;   
    }
    return 0;
}