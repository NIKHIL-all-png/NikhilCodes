#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5};
    // cout<<arr<<endl;
    // cout<<*(arr+2);
    int *p=&arr[0];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(&arr)<<endl;
}