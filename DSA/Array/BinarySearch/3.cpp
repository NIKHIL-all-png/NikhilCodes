#include<iostream>
using namespace std;
int L(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
   while(s<=e){
    if(arr[mid] ==key){
        ans=mid;
        s=mid+1;
    }
    else if(key>arr[mid]){
        s=mid+1;

    }
    else if(key<arr[mid]){
        e=mid-1;

    }
    mid=s+(e-s)/2;
   }
   return ans;
}


int F(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
   while(s<=e){
    if(arr[mid] ==key){
        ans=mid;
        e=mid-1;
    }
    else if(key>arr[mid]){
        s=mid+1;

    }
    else if(key<arr[mid]){
        e=mid-1;

    }
    mid=s+(e-s)/2;
   }
   return ans;
        
}
int main(){
    int arr[6]={1,2,2,2,3,4};
    int first=F(arr,6,2);
    int last=L(arr,6,2);
    cout<<first<<last<<endl;
    return 0;
}