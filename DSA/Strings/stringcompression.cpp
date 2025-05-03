#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enetr a string"<<endl;
    getline(cin,s);
    string str;
    int c=1;
    int p=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else if(s[i] != s[i+1]){
            if(c==1){
                str.push_back(s[i]);
            }
            else if(c > 1){
                if(c<10){
                    str.push_back(s[i]);
                str += to_string(c);
                }
                else if(c>=10){
                    int q=c%10;
                    str.push_back(s[i]);
                    c=c/10;
                    str += to_string(c);
                    
                str += to_string(q);
                }
                
            }
            c=1;
        }
    }
    cout<<"new string is"<<endl;
    cout<<str;
}