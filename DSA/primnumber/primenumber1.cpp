#include<iostream>

using namespace std;

int main(){
    int n=8;

    
    for(int i=1;i<=n;i++){
        for(int j=2;j<n;j++){
            if(n%j ==0){
                cout<<"";
                break;
            }else{
                cout<<n;
                break;
            }
        }

        n--;
        cout<<endl;
        
    }
    

    return 0;
}