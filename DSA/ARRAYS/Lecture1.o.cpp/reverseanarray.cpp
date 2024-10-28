#include<iostream>
using namespace std;

int reverse(int arr[],int size){
    for(int i=size;i>0;i--){
        cout<<arr[i-1]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={ 4,2,7};
    int size=3;

    reverse(arr,size);
}