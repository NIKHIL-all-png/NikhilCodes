#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[10]={1,2,1,2,3,};
    int q=unique(arr,10);
    cout<<q<<endl;
    return 0;
} 