#include<iostream>
using namespace std;
void print(int *p){
    cout<<"My name is Nikhil Gupta";
}
int main(){
    int val=5;
    int *p=&val;
    print(p);
}