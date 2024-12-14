#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
}
int main(){
    int arr[6]={1,2,3,4,2,3};
    duplicate(arr,6);
    //cout<<q<<endl;
    return 0;
}