#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }
    void push(char element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<" stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"empty";
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);
    string str="babbar";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char s=str[i];
        st.push(s);
    }
    string ans="";
    while(st.isempty()){
        char ch=st.peak();
        ans.push_back(ch);
        st.pop();
    }
    cout<<ans;
}