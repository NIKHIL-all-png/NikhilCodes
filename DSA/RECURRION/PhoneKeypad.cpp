#include<iostream>
#include<vector>
#include<map>
using namespace std;
void name(string digit,string output,vector<string> &ans,int count,string mapping[]){
    if(count>=digit.length()){
        ans.push_back(output);
        return;
    }
    //real code for the different types of names
    int element=digit[count]-'0';
    string value=mapping[element];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        name(digit,output,ans,count+1,mapping);
        output.pop_back();
    }
}
int main(){
    string digits;
    getline(cin,digits);
    string output="";
    vector<string> ans;
    int count=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    name(digits,output,ans,count,mapping);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    cout<<endl;
}