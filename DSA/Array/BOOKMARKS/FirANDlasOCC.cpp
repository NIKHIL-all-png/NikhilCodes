#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,5,5,5,6,7};
    int n=arr.size();
    int k=5;
    int p;
    vector<int> Occ;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            Occ.push_back(i);
            p=i;
            break;


        }
    }
    for(int j=p+1;j<n;j++){
        if(arr[j]!=k){
            Occ.push_back(j-1);
        }

    }
    cout<<"First Occ"<<" "<<Occ[0]<<endl;
    cout<<"Second Occ"<<" "<<Occ[1]<<endl;


}