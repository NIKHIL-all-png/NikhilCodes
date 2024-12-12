#include<iostream>
using namespace std;
int Min(int A[],int n){
    int mini=INT8_MAX;
    for(int i=0;i<n;i++){
        mini=min(A[i],mini);
    }
    return mini;
}


int main(){
    int size;
    cin>>size;
    int A[100];
    for(int i=0;i<size;i++){
        cin>>A[i];
        cout<<endl;
    }
    cout<<Min(A,size);
    return 0;
}