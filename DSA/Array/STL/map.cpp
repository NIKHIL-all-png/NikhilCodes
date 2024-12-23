#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    //m[0]="Nishchal";
    m[1]="Nikhil";
    m[13]="ji";
    m[2]="Gupta";
    m.insert({5,"Nishchal"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}