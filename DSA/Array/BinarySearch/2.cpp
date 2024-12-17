#include<iostream>
using namespace std;

int binarysearch(int even[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(even[mid]==key){
            return mid;
        }
        if(even[mid]<key){
            start=mid+1;
        }
        if(even[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={1,5,8,12,56,78};
    int index=binarysearch(even,6,56);
    cout<<"index of 56 is = "<<index<<endl;
    return 0;
}