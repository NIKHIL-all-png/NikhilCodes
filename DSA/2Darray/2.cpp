#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int n,int p){
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}    
int main(){
    int arr[3][4]={{1,7,1,3},{2,22,222,22},{3,33,33,3}};
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int s=0;;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
            if(s<sum){
                s=sum;
            }
        }
    }
    cout<<s;
}