#include<iostream>
using namespace std;
void Selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    cout<<"arr"<<endl;
    for(int p=0;p<n;p++){
        cout<<arr[p];
    }
}
int main(){
    int arr[5]={1,2,5,4,8};
    Selectionsort(arr,5);
    return 0;
}