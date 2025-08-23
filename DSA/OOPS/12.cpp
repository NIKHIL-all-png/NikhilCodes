#include<iostream>
using namespace std;
class student{
    public:
    string name;
    double* cgpaptr;
    student(string name,float cgpa){
        this-> name =name;
        cgpaptr = new double;
        *cgpaptr=cgpa;
    }
    student(student &obj){
        this-> name=obj.name;
        this-> cgpaptr=new double;
        *this-> cgpaptr=*obj.cgpaptr;
    }
    void getinfo(){
        cout<<name<<" "<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("Nikhil Gupta",8.7);
    //s1.getinfo();
    student s2(s1);//this calls the copy constructor
    s1.getinfo();
    *(s2.cgpaptr)=9.2;
    s1.getinfo();
}