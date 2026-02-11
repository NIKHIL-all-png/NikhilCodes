#include<iostream>
using namespace std;
void insertsor(int arr[],int i,int n){
    if(i==n){
        return;
    }
    int j=i;
    while(j>0 && arr[j-1]>arr[i]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertsor(arr,i+1,6);

}
int main(){
    int arr[6]={1,6,3,9,23,40};
    cout<<"Before sorting"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertsor(arr,0,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}