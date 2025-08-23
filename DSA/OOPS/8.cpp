#include<iostream>
using namespace std;
class hero{
    public:
    
    char level;
    // private:
    int health;
    // hero(){
    //     cout<<"level";
    // }
    // int gethealth(){
    //     return health;
    // }
    hero(int health){
        this->health=health;
    }
    hero(int health,char level){
        this -> level=level;
        this ->health=health;
    }
    void print(int health,char level){
        cout<<this ->health<<endl;
        cout<<this ->level<<endl;
    }
};
int main(){
    hero s(70,'C');
    s.print();
    hero R(s);
    R.print();
}