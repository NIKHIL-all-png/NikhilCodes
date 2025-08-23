#include<iostream>
using namespace std;
class car{
    public:
    int year;
    string name;
};
int main(){
    car car1;
    car1.year=1994;
    car1.name="GJCJG";
    cout<<car1.name<<" "<<car1.year;
}