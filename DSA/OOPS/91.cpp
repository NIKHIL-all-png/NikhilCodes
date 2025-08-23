#include<iostream>
#include<string>
using namespace std;
class teacher{
    //properties / attributes
    private:
    double salary;
    public:
    //Non parameterized constructor
    teacher(){
        cout<<"Hii I am Constructor"<<endl;
    }
    //parameterized constructor
    teacher(string name,string d,string s){
        this-> name=name;
        dept=d;
        subject=s;
    }

    //copy constructor
    teacher(teacher & obj){
        cout<<"i am contructor copy"<<endl;
        this-> name=obj.name;
        this-> dept=obj.dept;
    }
    string name;
    string dept;
    string subject;
    //methods/ Member fuction
    void chandedep(string newdep){
        dept=newdep;
    }
    void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }
    void getinfo(){
        cout<<name<<endl;
    }
};
int main(){
    teacher t1("Nikhil","Cs","Maths");
    //t1.getinfo();
    teacher t2(t1);
    t2.getinfo();
    //cout<<t1.getsalary();
    // teacher t2;
    // teacher t3;
    // teacher t4;
    // teacher t5;
    return 0;
}