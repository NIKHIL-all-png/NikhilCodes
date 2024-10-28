#include<iostream>
using namespace std;

void largest(int arr[], int size){
    int largest=INT8_MIN;
    for(int i=0;i<size;i++){
        largest=max(arr[i],largest);
    }
    cout<<largest<<endl;
}

int main(){

    int arr[]={1,2,3,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    largest(arr,size);

    //for(int i=0;i<size;i++){
    //    arr[i];
    //}
    return 0;
}