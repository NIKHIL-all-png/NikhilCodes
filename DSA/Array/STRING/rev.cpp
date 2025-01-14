#include<iostream>
using namespace std;
int main(){
    char name[]="nikhil";
    cout<<name<<endl;
    int i=0;
    int j=sizeof(name)-1;
    cout<<j;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<name<<endl;
    return 0;
}