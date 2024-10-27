#include<iostream>
using namespace std;

int main(){
    int size=5;

    int smallest =INT8_MAX;
    int nums[]={5 , 15 , 22, 1, -25};

    for( int i=0;i<size;i++){
        smallest =min(nums[i],smallest);
    }
    cout<<smallest<<endl;
    return 0;
}