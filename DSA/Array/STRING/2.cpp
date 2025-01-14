#include<iostream>
using namespace std;
int lenght(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"Your name is nikhil gupta"<<name<<endl;
    cout<<"lenght of your name is "<<lenght(name)<<endl;
    return 0;
}