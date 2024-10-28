#include<iostream>
using namespace std;

void reverse(int arr[], int size){
      int start=0;
      int end=size-1;

      while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

int main(){
    int arr[]={4,2,7,8,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
