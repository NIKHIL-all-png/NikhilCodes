#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void subset(vector<int> a,vector<vector<int> >& ans,vector<int> output,int index){
    
    if(index >= a.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    subset(a,ans,output,index+1);
    //include
    int element=a[index];
    output.push_back(element);
    subset(a,ans,output,index+1);
}
using namespace std;
int main(){
    vector<int> a={1,2,3};
    vector<vector<int> > ans;
    vector<int> output;
    int index=0;
    subset(a,ans,output,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}