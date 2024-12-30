#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int k,int mid){
    int cowcount=1;
    int lastposition=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-lastposition)>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;
}
int AgressiveCows(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }

        }
    }
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=e-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}

int main(){
    int arr[5]={4,2,1,3,6};
    int k=2;

    cout<<AgressiveCows(arr,5,k);
}