#include<iostream>
#include<unordered_map>
using namespace std;

void printuniquevalue(int arr[],int size){
    unordered_map<int,int>frequency;

    //step: count occurence of each element
    for(int i=0;i<size;i++){
        frequency[arr[i]]++;
    }

    cout<<"unique value value in the array are:";

    //print elements with a count of 1(unique values)

    for(int i=0;i<size;i++){
    if(frequency[arr[i]]==1){
        cout<<arr[i]<<" ";
    }
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,1,3,5,4,6,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printuniquevalue(arr,size);
}


