#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"0 is present or not in the given set"<<" "<<s.count(0)<<endl;
    set<int>:: iterator itr=s.find(5);
    for(auto p=itr;p!=s.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
}