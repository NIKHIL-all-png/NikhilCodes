#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int *p=&n;
    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<0x61ff0c<<endl;
    cout<<*p;
    cout<<*&n;

}