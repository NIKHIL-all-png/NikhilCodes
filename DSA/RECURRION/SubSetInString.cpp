#include<iostream>
#include<vector>
#include<vector>
using namespace std;
void subset(vector<string> &s,string str,int count,string output){
    if(count>=str.length()){
        if(output.size()>0){
             s.push_back(output);
        }
        return;
    }
    //exclude
    subset(s,str,count+1,output);
    //include
    char element=str[count];
    output.push_back(element);
    subset(s,str,count+1,output);
}
int main(){
    vector<string> s;
    string str;
    getline(cin,str);
    int count=0;
    string output="";
    subset(s,str,count,output);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    
    
}