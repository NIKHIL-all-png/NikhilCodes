#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
   
    d.push_back(1);
    d.push_front(2);
//      d.push_back(4);
    
//     for(int i: d){
//         cout<<i<<" ";
//     }
//    d.pop_back();
   cout<<endl;
//    for(int i: d){
//         cout<<i<<" ";
//     }
   cout<<"Print First Index Element -->"<<d.at(0)<<endl;
   cout<<"front"<<d.front()<<endl;
   cout<<"back"<<d.back()<<endl;
   cout<<d.empty()<<endl;

   cout<<"before earse"<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
   cout<<"after erase"<<d.size()<<endl;
   for(int i: d){
        cout<<i<<" ";
    }
}