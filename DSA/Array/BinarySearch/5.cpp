#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if((mid==0||arr[mid-1]<arr[mid])&&(arr[mid+1]<arr[mid]||mid==n-1)){
            return mid;
        }
        else if(mid>0&&arr[mid-1]<arr[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;//in case there is no peak value   
}
int main(){
    int arr[5]={1,2,6,3,2};
    int PEAKINDEX=peak(arr,5);
    cout<<PEAKINDEX<<endl;
    return 0;
}