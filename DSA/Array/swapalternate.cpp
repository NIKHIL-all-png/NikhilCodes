#include<iostream>
using namespace std;
void printarray(int arr[],int b){
    for(int i=0;i<b;i++){
        cout<<arr[i];
    }

}

void swapalternate(int arr[], int p){
    int arr1;
   
   for(int i=0;i<p;i=i+2){
    arr1=arr[i];
    //swap(arr[i],arr[i+1]);
    arr[i]=arr[i+1];
    arr[i+1]=arr1;
   }
}


int main(){
    int arr[6]={1,2,3,4,5,6};
    swapalternate(arr,6);
    printarray(arr,6);
    

}