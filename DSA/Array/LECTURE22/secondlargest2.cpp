#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int SecondLargest(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
        if(arr[i] != arr[n-1]){
            return arr[i];
        }
        else{
            return -1;
        }
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    cout<<SecondLargest(arr,5)<<endl;;
}