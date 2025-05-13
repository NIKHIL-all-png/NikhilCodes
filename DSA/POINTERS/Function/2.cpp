#include<iostream>
using namespace std;
int getsum(int *arr,int p){
    int s=0;
    for(int i=0;i<p;i++){
        s=s+arr[i];
    }
    return s;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<getsum((arr+2),3);
}