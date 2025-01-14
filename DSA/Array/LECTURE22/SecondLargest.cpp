#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int F_l=INT8_MIN;
    int S_l=INT8_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>F_l){
            S_l=F_l;
            F_l=arr[i];
        }
        else if(arr[i]>S_l&&arr[i]<F_l){
            S_l=arr[i];
        }
    }
    cout<<"Second Largest Number is"<<S_l<<endl;
    return 0;
}