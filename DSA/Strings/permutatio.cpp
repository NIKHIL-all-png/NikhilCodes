#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int exi(string s2,string s1){
    if(s2.find(s1) != string::npos){
        return 1;
    }
    return 0;
}
int ex(string s2,string revper){
    if(s2.find(revper) != string::npos){
        return 1;
    }
    return 0;
}
string reversep(string s1){
    reverse(s1.begin(),s1.end());
    return s1;
}
int check(string s2,string s1,string revper){
    if(exi(s2,s1)){
        return 1;
    }
    else if(ex(s2,revper)){
        return 1;
    }
    return 0;
}
int main(){
    string s2;
    cout<<"Enetr any string "<<endl;
    getline(cin,s2);
    string s1;
    cout<<"enter checking of string permutation"<<endl;
    getline(cin,s1);
    string revper=reversep(s1);
    int a=check(s2,s1,revper);
    if(a==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}