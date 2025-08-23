#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    string pat;
    getline(cin,pat);
    string txt;
    getline(cin,txt);
    int p=0;
    int k;
    for(int i=0;i<pat.length();i++){
        if(txt[p]==pat[i]){
            p++;
            if(p==txt.length()){
                ans.push_back(i-p+1+1);
                p=0;
            }
        }
    }
    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<endl;;
    }
}
