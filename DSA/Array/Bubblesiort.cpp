#include<iostream>
using namespace std;
void bubblesort(int arr[],int key){
    for(int i=0;i<key-1;i++){
        for(int j=0;j<key-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<key;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={1,4,2,7,3};
    bubblesort(arr,5);
}