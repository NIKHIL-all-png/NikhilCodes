#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int p=s.length();
    int q=0;
    char ans[100];
    ans[q]=s[0];
    for(int i=0;i<p;i++){
        if(s[i]==' '){
            q++;
            ans[q]=s[i+1];
        }
    }
    ans[q+1]='\0';
    cout<<ans;
}