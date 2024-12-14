#include<iostream>
using namespace std;

void printarray(int print[], int size){
    for(int i=0;i<size;i++){
        cout<<print[i];
    }
    cout<<endl;
}

void reverse(int rev[],int size){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        swap(rev[start],rev[end]);
        start++;
        end--;
    }


}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={1,3,4,5,6};
    reverse(arr,5);
    reverse(brr,5);

    printarray(arr,5);
    printarray(brr,5);


    return 0;
}