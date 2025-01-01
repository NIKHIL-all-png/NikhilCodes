#include<iostream>
using namespace std;


void reverse(int t[], int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(t[start],t[end]);
        start++;
        end--;
    }
}

void printarray(int p[],int size){
    for(int i=0;i<size;i++){
        cout<<p[i];
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={2,-4,1,6,8};
    
    reverse(arr,5);
    reverse(brr,5);

    printarray(arr,5);
    printarray(brr,5);

    //reverse(arr,5);

    return 0;
}