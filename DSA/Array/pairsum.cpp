#include<iostream>
using namespace std;
void pairsum(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cout<<(arr[i]+arr[j])<<endl;;

        }

    }
}


int main(){
    int arr[3]={1,2,3};
    pairsum(arr,3);

    return 0;
}