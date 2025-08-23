#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public animal{
    
    
};
class german: public Dog{
    
};

int main(){
    german d;
    d.speak();
    return 0;
}