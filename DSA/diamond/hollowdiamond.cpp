#include<iostream>

using namespace std;

int main() {

    int n=4;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            
            cout<<" ";
        }
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            
            
                cout<<" ";

            
        }

        for(int j=i;j>1;j--){
          cout<<"*";
        }
        cout<<endl;

        
    }
    int p=3;

    for(int i=0;i<p;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        for(int j=0;j<p-i-1;j++){
            cout<<" ";
        }
        for(int j=i;j<=0;j++){
            cout<<" ";
        }

        for(int j=0;j<p-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}

