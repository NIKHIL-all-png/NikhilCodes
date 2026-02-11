#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,6,2,9,4};
    for(int i=0;i<5;i++){
        int MinIn=i;
        for(int j=i+1;j<5;j++){
            if(arr[MinIn]>arr[j]){
                MinIn=j;
            }
        }
        swap(arr[MinIn],arr[i]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}