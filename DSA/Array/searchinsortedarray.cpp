#include<iostream>
using namespace std;
int pivot(int arr[],int n,int key){
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            ans =i;
            break;
        }
    }
    return ans;
}

int main(){
    int arr[5]={12,15,18,2,4};
    int key=2;
    cout<<pivot(arr,5,2);
}