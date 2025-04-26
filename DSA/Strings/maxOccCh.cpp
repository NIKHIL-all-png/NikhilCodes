#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    while(name[count] !='\0'){
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"enter the word"<<endl;
    cin.getline(ch, 20);
    int len=getlength(ch);
    char str[26]={0};
    for(int i=0;i<len;i++){
        str[ch[i]-'a']++;
    }
    int maxnum=0;
    char maxc='a';
    for(int i=0;i<26;i++){
        if(str[i]>maxnum){
            maxnum=str[i];
            maxc=i+'a';
        }
    }
    cout<<maxc;
}
