#include<iostream>
using namespace std;
int l(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int f(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    int arr[6]={1,2,3,3,3,4};
    int F=f(arr,6,3);
    int L=l(arr,6,3);
    cout<<F<<L<<endl;
    return 0;
}