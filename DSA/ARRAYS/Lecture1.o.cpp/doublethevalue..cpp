#include<iostream>
using namespace std;

void doublethevalue(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

int main(){
    int arr[] ={1,2,3};

    doublethevalue(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}