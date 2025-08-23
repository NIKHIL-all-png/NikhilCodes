#include<iostream>
//#include "hero.cpp"
using namespace std;

class hero{
    //Properties
    public:
    int health;
    char level;
    void print(){
        cout<<level;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    //creation of object
    hero h1;
    cout<<sizeof(h1)<<endl;
    cout<<h1.gethealth()<<endl;
    //use setter
    h1.sethealth(50);
    cout<<h1.gethealth()<<endl;
    // h1.health=70;
    // h1.level='A';
    // cout<<h1.health<<endl;
    // cout<<h1.level<<endl;
    // cout<<h1.health<<endl;
    // cout<<"size :"<<sizeof(h1)<<endl;
}