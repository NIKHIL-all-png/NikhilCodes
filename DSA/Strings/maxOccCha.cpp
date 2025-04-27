#include<iostream>
using namespace std;
int num(char c,string str,int length){
    int count=0;
    for(int i=0;i<length;i++){
        if(c==str[i]){
            count++;
        }
    }
    int p=count-1;
    return p;
}
int main(){
    string str;
    cout<<"enter any sentence"<<endl;
    getline(cin,str);
    string ch;
    int p=0;
    int length=str.length();
    for(int i=0;i<length;i++){
        for(int j=0;j<i;j++){
            if(str[i] != str[j]){
                ch[p]=str[i];
                p++;
            }
        }
    }   
    char maxOcc=ch[0];
    for(int k=0;k<p-1;k++){
        if(num(ch[k],str,length)>num(ch[k+1],str,length)){
            maxOcc=ch[k];
        }
    }
    cout<<maxOcc;
}