#include<iostream>
using namespace std;
class car{
    public:
    int xykhz(int pr);
};
int car::xykhz(int pr){
    return pr;
}
int main(){
    car as;
    cout<<as.xykhz(50);
    return 0;
}