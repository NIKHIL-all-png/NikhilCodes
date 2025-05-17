#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    int pivotindex=s+cnt;
    swap(arr[s],arr[pivotindex]);
    int i=s;
    int j=e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i]<arr[pivotindex]){
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(i<pivotindex&&j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //Find the partion index
    int p=partition(arr,s,e);

    //left part sort karo
    quicksort(arr,s,p-1);
    //left part sort karo
    quicksort(arr,p+1,e);
}
int main(){
    int arr[6]={1,5,2,6,3,4};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}