#include<iostream>
#include<stack>
using namespace std;
void sortedin(stack<int> &st,int num){
    //
    if(st.empty()||st.top()<num){
        st.push(num);
        return;
    }
    int nu=st.top();
    st.pop();
    //recursive
    sortedin(st,num);
    st.push(nu);
}
void sortstack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }
    int num=st.top();
    st.pop();
    sortstack(st);
    sortedin(st,num);
}
void printst(stack<int> &st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(9);
    st.push(5);
    sortstack(st);
    printst(st);
}