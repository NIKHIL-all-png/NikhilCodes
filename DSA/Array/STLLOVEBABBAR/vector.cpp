#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> a(5,1);
    vector<int> last(a);
    for(int i:last){
        cout<<i;
    }
    cout<<endl;
    vector<int> v;
    cout<<"size "<<v.size()<<endl;
    v.push_back(1);
    cout<<"size "<<v.size()<<endl;
    v.push_back(2);
    cout<<"size "<<v.size()<<endl;
    v.push_back(3);
    cout<<"size "<<v.size()<<endl;
    cout<<"capaccity "<<v.capacity()<<endl;
    cout<<"at index 2 is "<<v.at(2)<<endl;
    cout<<"beform pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    v.pop_back();
    cout<<""<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
 
    }
    cout<<"size before claer"<<v.size()<<endl;
    v.clear();
    cout<<"size after clear"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
}