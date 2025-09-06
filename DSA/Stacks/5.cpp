#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st,int n){
    //base
    if(st.empty()){
        st.push(n);
        return;
    }
    int num=st.top();
    st.pop();
    //recursive call
    solve(st,n);
    st.push(num);
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
    solve(st,n);
//     for(int i=0;i<st.size();i++){
//         cout<<st;
//     }
printst(st);
}