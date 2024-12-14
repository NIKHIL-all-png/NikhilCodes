#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int p;

    for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    p=arr[i];
                    arr[i]=arr[j];
                    arr[j]=p;
                }
            }
            cout<<arr[i];
        }    
}

int main(){
    int arr[5]={1,0,1,1,0};
    sort(arr,5);
    return 0;
}