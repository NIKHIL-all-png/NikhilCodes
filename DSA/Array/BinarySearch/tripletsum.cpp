#include<iostream>
using namespace std;

void triplets(int arr[],int n,int key){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    cout<<"triplets are"<<arr[i]<<arr[j]<<arr[k]<<endl;
                }
            }
        }

    }

}

int main(){

    int arr[5]={1,2,3,4,5};
    triplets(arr,5,7);
    return 0;
}