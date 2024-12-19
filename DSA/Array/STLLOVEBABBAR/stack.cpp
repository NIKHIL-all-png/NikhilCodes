#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Nikhil");
    s.push("gupta");
    s.push("ji");
    cout<<"top element"<<s.top()<<endl;
}