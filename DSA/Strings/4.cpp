#include<iostream>
using namespace std;
bool checkpalindrome(char s[],int p){
    int k=0;
    int e=p-1;
    int l=1;
    while(k<e){
        if(s[k] != s[e]){
            l=0;
            break;
        }
        k++;
        e--;
    }
    return l;
}
char lower(char k){
    if(k<='Z'&&k>='A'){
        k=k-'Z'+'z';
    }
    return k;
}
int getlength(char name[]){
    int count=0;
    while(name[count] !='\0'){
        count++;
    }
    return count;
}
int main(){
    char s[20];
    cout<<"enter your name"<<endl;
    cin>>s;
    cout<<"your anme is: "<<s<<endl;
    int length=getlength(s);
    for(int i=0;i<length;i++){
        char v=s[i];
        s[i]=lower(v);
    }
    int t=checkpalindrome(s,length);
    if(t==1){
        cout<<"String is palindrome";
    }
    else if(t==0){
        cout<<"String is not a palindrome";
    }
}
