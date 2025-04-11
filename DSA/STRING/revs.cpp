#include<iostream>
using namespace std;

int length(char name[]){
    int count=0;
    for(int i=0;name[i] !='\0';i++ ){
        count++;
    }
    return count;

}


int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int p=length(name);
    
    cout<<"length is "<<p<<endl;

    cout<<"reverse a string"<<endl;
    for(int i=0;i<p/2;i++){
        int l=name[i];
        name[i]=name[p-i-1];
        name[p-i-1]=l;

    }
    cout<<"reverse string is "<<name;
    return 0;
}