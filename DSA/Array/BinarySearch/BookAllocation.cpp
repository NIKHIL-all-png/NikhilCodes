#include<iostream>
using namespace std;

int isPossible(int arr[],int size,int st,int mid){
    int studentcount=1; 
    int pagesum=0;
    //int p=0;
    for(int i=0;i<size;i++){
        if(pagesum +arr[i]<=mid){
            pagesum=pagesum+arr[i];
        }
        else{
            studentcount++;
            if(studentcount>st||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
            //p=p+arr[i];
        }
    }
    return true;
}

int BAP(int arr[],int size,int st){
    int s=0;
    int sum=0;
    int ans=-1;
    //int e;
    for(int i=0;i<size;i++){
        sum=sum +arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,size,st,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
    int arr[4]={10,20,30,40,};
    int st=2;
    cout<<BAP(arr,4,st)<<endl;
    return 0;
}