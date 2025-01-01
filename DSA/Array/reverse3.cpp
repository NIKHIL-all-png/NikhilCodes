#include<iostream>
#include<vector>
using namespace std;
vector<int> rev(vector<int> v,int m){
    int size=v.size();
    int s=m+1;
    int e=size-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    // for(int i=0;i,size;i++){
    //     v.push_back(v[i]);
    // }
    return v;
}
void printf(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int m=3;
    vector<int> ans=rev(v,2);
    printf(ans);
    return 0;
}