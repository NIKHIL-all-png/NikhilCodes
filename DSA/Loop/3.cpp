#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        int count=0;
        while(j<=i) {
            cout<<i+count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}