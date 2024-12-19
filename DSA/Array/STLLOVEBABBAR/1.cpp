#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a={1,2,3,4,5};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    } 
     cout<<"element of a of index 2 = "<<a.at(3)<<endl;

     cout<<"empty or not "<<a.empty()<<endl;
     cout<<"first element"<<a.front()<<endl;
     cout<<"last element"<<a.back()<<endl;
    //return 0;
}