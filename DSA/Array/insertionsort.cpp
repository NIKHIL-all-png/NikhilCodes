#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int p;
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                p=j;
                break;
            }

        }
        arr[p+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={1,3,2,5,4};
    insertionsort(arr,5);
    return 0;
}