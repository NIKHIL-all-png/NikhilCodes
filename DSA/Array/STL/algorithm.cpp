#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(7);
    int p=binary_search(v.begin(),v.end(),7);
    cout<<p;
}