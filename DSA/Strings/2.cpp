#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<"reverse string is"<<name;
}

int getlength(char name[]){
    int count=0;
    while(name[count] !='\0'){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is : "<<name;
    int p=getlength(name);
    cout<<"length of your name is"<<p<<endl;
    reverse(name,p);
}