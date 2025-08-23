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
        cout<<this->level<<endl;
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

    Hero suresh(70,'C');
    suresh.print();
}