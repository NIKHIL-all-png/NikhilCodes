#include<iostream>
using namespace std;

int linearsearch(int arr[], int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}


int main(){

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=5;

    cout<<linearsearch(arr, size,target);
    return 0;
}