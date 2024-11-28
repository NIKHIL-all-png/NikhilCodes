#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //int d=0;
        while(j<=n){
            char p=64+i+j-1;
            cout<<p;
            j++;
        }
        i++;
        cout<<endl;
    }
}