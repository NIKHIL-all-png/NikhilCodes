#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(int nums[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(nums[s],nums[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
}
int main (){
    int nums[5]={1,2,3,4,5};
    rotate(nums,5);
    return 0;

}