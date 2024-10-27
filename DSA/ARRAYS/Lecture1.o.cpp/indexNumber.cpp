#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;

    vector<int>arr(n);

    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minIndex = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }

    cout<< " Index of the smallest element ="<<minIndex<<endl;
    return 0;
}