#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    person(){

    }
    
};
class student : public person{
    public:
    int rollno=26;
    void getinfo(){
        cout<<"name"<<name<<" "<<"rollno."<<rollno<<endl;
    }
};
int main(){
    student p1;
    p1.name="nikhil";
    p1.rollno=54;
    p1.getinfo();
    return 0;
}
