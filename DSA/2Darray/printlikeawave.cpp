#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    cout<<"enter a 2d array"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"print it according to row wise"<<endl;
    for(int j=0;j<2;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j];
        }
    }
}