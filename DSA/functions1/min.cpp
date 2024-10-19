#include<iostream>

using namespace std;

//min of two numbers

int min(int a, int b){ //parameters
    if(a<b){
        return a;
    }else{
        return b;
    } 
}
int main(){
    
    cout<<"min of two numbers ="<<min(5,4)<<endl; //arguments
}