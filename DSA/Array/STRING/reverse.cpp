#include<iostream>
using namespace std;
int main(){
    char name[]="nikhil";
    cout<<name;
    int i=0;
    int j=sizeof(name)-1;
    cout<<j;
    while(i<j){
        swap(name[i],name[j]);
    }
    
    cout<<name;
    
    return 0;
}