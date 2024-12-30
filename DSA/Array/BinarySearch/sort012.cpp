#include<iostream>
#include<vector>
using namespace std;
void sort012(int arr[], int n)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        cout<<0;
    }
    for(int i=0;i<count1;i++){
        cout<<1;
    }
    for(int i=0;i<count1;i++){
        cout<<2;
    }
    
}
int main(){
    int arr[6]={0,1,2,2,1,0};
    sort012(arr,6);
}