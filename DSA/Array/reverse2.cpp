#include<iostream>
#include<vector>
using namespace std;
void rev(int arr[],int n,int m){
    int s=m+1;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=2;
    rev(arr,5,key);
    return 0; 
}