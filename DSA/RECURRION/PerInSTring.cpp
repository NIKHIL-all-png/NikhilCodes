#include<iostream>
#include<vector>
using namespace std;
void per(string str,string s,vector<string> &ans,int count){
    if(count>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=count;i<str.length();i++){
        swap(str[count],str[i]);
        per(str,s,ans,count+1);
        swap(str[count], str[i]);
    }
}
int main(){
    string str;
    getline(cin,str);
    string s;
    vector<string> ans;
    int count=0;
    per(str,s,ans,count); 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}