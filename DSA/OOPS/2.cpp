#include<iostream>
using namespace std;
class base{
    public:
    int publicdata;
    private:
    int privatedata;
    protected:
    int protecteddata;
    

};
class dereive: public base{
    public:
    void p(){
         publicdata=60;
        //privatedata=40;
        protecteddata=30;
    }
};
int main(){
    dereive d;
    d.p();
    cout<<d.publicdata<<endl;
    // d.publicdata=40;
    // cout<<d.publicdata;
    //cout<<d.protecteddata;
}
