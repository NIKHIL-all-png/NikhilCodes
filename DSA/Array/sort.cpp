#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void sort1(int arr[], int n){
    int p;

    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }    
}

int main(){
    int arr[10]={1,0,1,1,0,1,0,1,1,0};
    sort1(arr,10);
    printarray(arr,10);
    return 0;
}