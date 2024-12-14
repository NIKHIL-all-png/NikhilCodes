#include<iostream>
using namespace std;
void tripletsum(int arr[], int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                cout<<(arr[i]+arr[j]+arr[k])<<endl;
            }
        }
    }
}
int main(){

    int arr[5]={1,2,3,4,5};
    tripletsum(arr,5);

    return 0;
}