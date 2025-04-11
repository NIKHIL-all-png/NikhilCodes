#include<iostream>
using namespace std;
int checkpalindrome(char name[],int p){
    int s=0;
    int e=p-1;
    int l=1;
    while(s<e){
        if(name[s] != name[e]){
            l=-1;
            break;
        }
        s++;
        e--;
    }
    return l;
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
    cin>>name;
    cout<<"Your name is : "<<name;
    int p=getlength(name);
    cout<<"length of your name is"<<p<<endl;
    int t=checkpalindrome(name,p);
    if(t==1){
        cout<<"String is palindrome";
    }
    else if(t==-1){
        cout<<"String is not a palindrome";
    }
}