#include<iostream>
#include<vector>
using namespace std;

int main (){
    int arr[6]={1,1,3,4,1,1};
    //int key=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    

    for(int i=0;i<n-1;i++){
        int a=1;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                a++;
            }
        }
        if(a>=3){
            cout<<arr[i]<<endl; 
            break;
        }
        else{
            a=0;
        }
        //a=0;
    }
    return 0;
}