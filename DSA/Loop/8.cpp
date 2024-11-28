#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int e=0;
    while(i<=n){
        int j=1;
        //int d=0;
        while(j<=i){
            char c='A'+i+j-2;
            cout<<c<<" ";
            j++;
            
        }
        e++;
        i++;
        cout<<endl;
    }
}