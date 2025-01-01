#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main (){
    int arr[5]={1,2,3,4,5};
    rotate(arr,5);
    return 0;

}