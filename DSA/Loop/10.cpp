#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        //int d=0;
        while(j<=i){
            char c='D'+j-i;
            cout<<c<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}