#include<iostream>
using namespace std;
int se(string s,string part){
    int p=s.length();
    int q=part.length();
    
        for(int i=0;i<=p-q;i++){
            if(s.substr(i,q)==part){
                return 1;
            }
        }
    return 0;
}
void removeOccurences(string &s,string part){
    int p=s.length();
    int q=part.length();
        for(int i=0;i<=p-q;i++){
            if(s.substr(i,q)==part){
                s.erase(i,q);
                break;
            }
        }
}
int main(){
    string s;
    string part;
    cout<<"name of string s:"<<endl;
    getline(cin,s);
    cout<<endl;
    cout<<"name of the string part"<<endl;
    getline(cin,part);
    cout<<endl;
    while(se(s,part)==1){
        removeOccurences(s,part);
    }
    cout<<s;
}