#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);

    //1
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //what will happen
    m["mera"]=2;
    // m["love"]=4;

    // cout<<m["mera"]<<endl;
    // cout<<m["love"]<<endl;

    // cout<<m.at("love")<<endl;
    // cout<<m.at("babbar")<<endl;
    // cout<<m.size();

    // cout<<m.count("Brother")<<endl;
    // cout<<m.count("love")<<endl;
    // m.erase("mera");
    // cout<<m.size();

    // for(auto i: m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    auto it=*(m.begin());
    cout<<it.first;
    // unordered_map<string,int> :: iterator it=m.begin();
    // while(it != m.end()){
    //     cout<<it->first <<" "<<it->second <<endl;
    //     it++;
    // }


    return 0;
}
