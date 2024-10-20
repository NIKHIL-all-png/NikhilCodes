#include<iostream>
#include<cmath>

using namespace std;

void fabonacci(int num){
    int a=0;
    int b=1;
    int nextterm = 0;
    cout<< a <<" "<< b;
    for(int i=1;i<=num-2;i++){
        nextterm = a+b;
        cout<<" "<< nextterm <<" ";
        a=b;
        b=nextterm;
    }
}

int main(){


    fabonacci(10);
    cout<<"fabonacci series is";

    return 0;
}