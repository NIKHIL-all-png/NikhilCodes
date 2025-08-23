#include<iostream>
using namespace std;
int main(){
    int arr[5]{1,4,2,8,5};
    int cur,j;
    
    for(int i=1;i<5;i++){
        cur=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>cur){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
        
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

}