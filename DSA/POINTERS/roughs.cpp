#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,4,2,8,5,6,3,7,9,10};
    int n=10;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}