#include<iostream>
#include<vector>
using namespace std;
void rev(int arr[],int n,int m){
    int i=m;
    int p=0;
    while(i<(m+n)/2){
        swap(arr[i+1],arr[n-p-1]);
        i++;
        p++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=2;
    rev(arr,5,2);
    return 0;
}