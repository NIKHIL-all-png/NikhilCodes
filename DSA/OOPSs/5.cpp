#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    public:
    char level;
    Hero(){
        cout<<" Simple connstructor Called"<<endl;
    }

    //Parameteruised constructor
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        this-> level=level;
        this->health=health;
    }
    void print(){
        cout<<level<<endl;
    }
    char getlevel(){
        return level;
    }
    int gethealth(){
        return health;
    }
    void setlevel(char ch){
        level=ch;
    }
    void sethealth(int h){
        health=h;
    }
};
int main(){

    //object created Statically
    Hero ramesh(10);
    ramesh.print();

    //Dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp(22,'B');
    temp.print();


   
    


















    // a.sethealth(80);
    // a.setlevel('B');
    // cout<<"level is"<<a.level<<endl;
    // cout<<"health is"<<a.gethealth()<<endl;
    // //dynamicaly
    // Hero *b=new Hero;
    
    // b->setlevel('A');
    // b->sethealth(70);
    // cout<<"level is"<<(*b).level<<endl;
    // cout<<"health is"<<(*b).gethealth();
}