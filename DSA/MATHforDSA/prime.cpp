#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    int p=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            p=0;
            break;
            
        }
    }    
    if(p==1){
        cout<<"p";
    }
    else if(p==0){
        cout<<"NP";
    }
}
