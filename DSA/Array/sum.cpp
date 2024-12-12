#include<iostream>
using namespace std;
int add(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum =sum +arr[i];
    }
    return sum;
}

int main(){

    int arr[5]={1,4,2,8,5};
    
    cout<<add(arr,5)<<endl;

    return 0;
}