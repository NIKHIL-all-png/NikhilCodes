#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"string is given"<<endl;
    getline(cin,s);
    
    
    cout<<"print a new string"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}