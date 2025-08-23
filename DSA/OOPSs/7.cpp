#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    public:
    int health;
    public:
    char *name;
    char level;
    Hero(){
        cout<<" Simple connstructor Called"<<endl;
        name=new char[100];
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
        cout<<this->health<<endl;
        cout<<this->name<<endl;
        cout<<endl;
        
    }
    //copy constructor
    Hero(Hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        cout<<"copy cons"<<endl;
        this->health=temp.health;
        this->level=temp.level;
        this->name=ch;
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
    void setname(char name[]){
        strcpy(this->name,name);
    }
};
int main(){

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7]="Nikhil";
    //hero1.setname("Nikhil");
    hero1.setname(name);
    hero1.print();
    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0]='G';
    hero1.print();
}