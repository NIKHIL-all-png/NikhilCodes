#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool checkinclusion(string s1,string s2){
    //character count array
    int count[]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count[index]++;
    }
}
int main(){
    string s1;
    cout<<"enter any string"<<endl;
    getline(cin,s1);
    string s2;
    cout<<"enter any string"<<endl;
    getline(cin,s2);
    if(checkinclusion(s1,s2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
