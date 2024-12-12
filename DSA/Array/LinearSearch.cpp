#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}


int main(){
    int arr[5]={1,4,6,7,2};
    int key;
    cin>>key;

    int found=search(arr,5,key);

    if(found){
        cout<<"key is present in the array"<<endl;
    }
    else{
        cout<<"key is not present in the array"<<endl;
    }
    return 0;
}