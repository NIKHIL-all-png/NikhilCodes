#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string s,int n){
        name=s;
        age=n;
    }
    void display(){
        cout<<"name:"<<name<<"age:"<<age<<endl;
    }
};
int main(){
    student s1("nikhil",20);//constructor
    student s2=s1;
    s1.display();
    s2.display();
}