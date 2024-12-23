#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[s]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return e;

}


int main(){
    int arr[5]={4,5,1,2,3};
    cout<<pivot(arr,5);
}