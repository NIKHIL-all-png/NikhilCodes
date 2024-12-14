#include<iostream>
using namespace std;
void intersection( int arr[],int brr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<endl;
            }
        }
}
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={1,4,7,8,9};

    intersection(arr,brr,5);
    

    return 0;
}