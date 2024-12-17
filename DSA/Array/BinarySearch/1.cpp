#include<iostream>
using namespace std;
int binaraysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start)+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        //go to left wala part
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start)+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={2,4,6,8,15};
    int indexEVEN=binaraysearch(even,6,5);
    int indexODD=binaraysearch(odd,5,75);
    cout<<"index of 5 is"<<indexEVEN<<endl;
    cout<<"index of 15 is"<<indexODD<<endl;
    return 0;
}