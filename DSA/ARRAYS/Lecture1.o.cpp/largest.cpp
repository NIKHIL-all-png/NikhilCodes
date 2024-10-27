#include<iostream>
using namespace std;

int main(){
    int size = 5;
    int largest=INT8_MIN;
    int smallest=INT8_MAX;

    int nums[]={6,-4,56,546,4};

    for(int  i=0;i<size;i++){
        largest= max(nums[i],largest);
        smallest=min(nums[i],smallest);
    }
    cout<<"largest"<<largest<<endl;
    cout<<"smallest"<<smallest<<endl;
    return 0;
}