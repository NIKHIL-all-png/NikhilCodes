#include<iostream>
#include<stack>
using namespace std;
void insertatBottom(stack<int> &st,int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int nu=st.top();
    st.pop();
    //recursive  call
    insertatBottom(st,nu);
    st.push(nu);
}
void reve(stack<int> &st){
    
    if(st.empty()){
        
        return;
        
    }
    int num=st.top();
    st.pop();
    //recursive  call
    reve(st);
    insertatBottom(st,num);
}

void printst(stack<int> &st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    stack<int> st;
    int n=9;
    st.push(2);
    st.push(3);
    st.push(6);
    st.push(1);
printst(st);
cout<<endl;
reve(st);
printst(st);
}