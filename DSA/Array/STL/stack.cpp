#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    // for(int i: s){
    //     cout<<i<<" ";
    // }
    cout<<"Top Element:"<<s.top()<<endl;
    cout<<"Size of Stack"<<s.size()<<endl;
    s.pop();
    cout<<"Top Element:"<<s.top()<<endl;
    cout<<"Size of Stack"<<s.size()<<endl;
}