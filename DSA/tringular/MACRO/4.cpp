#include<iostream>
using namespace std;
void print(int *arr,int size,int start=0){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,size);
    cout<<endl;
    print(arr,size,2);
    return 0;
}