#include<iostream>
#include<stack>
using namespace std;
int ch(string str){
    int ans;
    if(str.length()%2==1){
        return -1;
    }
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='('){
            s.push(ch);
        }
        else{
            //ch is close
            if(!s.empty()&&s.top()=='('){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
        //stack contain
        
    }
    int a=0,b=0;
        while(!s.empty()){
            if(s.top()=='('){
                b++;
            }
            else{
                a++;
            }
            s.pop();
        }
        ans=(a+1)/2 +(b+1)/2;
    return ans;
}


int main(){
    string str="))";
    int p=ch(str);
    cout<<p;

    
}