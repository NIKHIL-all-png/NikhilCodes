#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    //name[3]='\0';

    cout<<"name is "<<name;
    int p=0;
    for(int i=0;i<20;i++){
        if(name[i] != '\0'){
            p++;
            
        }
        else{
            break;
        }
    }
    cout<<endl;
    cout<<p;
}