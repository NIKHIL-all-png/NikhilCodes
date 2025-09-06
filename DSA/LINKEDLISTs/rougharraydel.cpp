#include<iostream>
#include<vector>
// #include<conio.h>
using namespace std;
void delet(vector<int>& arr,int p){
    int s=arr.size();
    if(s==0){
        cout<<"empty";
        return;
    }
    for(int i=p;i<s-1;i++){
        
        arr[i]=arr[i+1];
    }
    arr.pop_back();
    // arr[p]=n;
    return;
}
int main(){
    vector<int> arr;
    int s;
    cin>>s;
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    // int n;
    int p;
    // cout<<"element to be insert"<<endl;
    // cin>>n;
    cout<<endl;
    cout<<"position"<<endl;
    cin>>p;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    delet(arr,p);
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
