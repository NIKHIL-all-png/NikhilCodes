#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Nikhil");
    q.push("Gupta");
    q.push("ji");
    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first element"<<q.front()<<endl;
    cout<<"after pop "<<q.size()<<endl;
}