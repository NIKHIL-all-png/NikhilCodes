#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    char i='A';
    
    while(i<=n){
        char j='A';
        //int p=0;
        while(j<=n){
            cout<<i<<" ";
            //p++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
}