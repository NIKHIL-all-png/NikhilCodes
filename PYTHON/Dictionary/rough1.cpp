#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={0,0,0,0};
    int c=0;
    vector<int> bt={4,9,43,10};
    vector<int> tbt;
    vector<int> wt;
    for(int i=0;i< (int)arr.size();i++){
        tbt.push_back(c+bt[i]);
        c=c+bt[i];
        wt.push_back(tbt[i]-bt[i]);
        
    }
    int cnt=0;
    for(int i=0;i<wt.size();i++){
        cout<<wt[i]<<" ";
        cnt=cnt+wt[i];
    }
    cout<<endl;
    cout<<cnt;
}