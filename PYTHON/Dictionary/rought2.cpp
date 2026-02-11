#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr={0,0,0,0,0};
    int c=0;
    vector<int> bt={4,3,1,6,2};
    vector<int> tbt;
    vector<int> wt;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-i-1;j++){
            if(bt[j] > bt[j+1]){
            swap(bt[j], bt[j+1]);
        }
        }
    }
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