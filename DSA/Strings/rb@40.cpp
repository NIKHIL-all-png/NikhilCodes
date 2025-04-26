#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter any string "<<endl;
    getline(cin,str);
    string st;
    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
            st.push_back('@');
            st.push_back('4');
            st.push_back('0');
        }
        else{
            st.push_back(str[i]);
        }
    } 
    str=st;
    cout<<st;
    cout<<str;
}
