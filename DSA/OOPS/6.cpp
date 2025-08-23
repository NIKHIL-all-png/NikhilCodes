#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string model;
    car(string n,string m){
        name=n;
        model=m;
    }
};
int main(){
    car car1("Ford","X6");
    cout<<car1.name<<" "<<car1.model;

}