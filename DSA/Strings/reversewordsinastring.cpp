#include<iostream>
using namespace std;
void rev(string &str,int p){
   
    int s=p-1;
    while(s>=0 && str[s]!=' '){
        s--;
    }
    s++;
    int e=p-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main(){
    string str;
    cout<<"enter any sentence"<<endl;
    getline(cin,str);
    
    int len=str.length();
    for(int i=0;i<=len;i++){
        if(str[i]==' ' || i==len){
            rev(str,i);
        }
        
    }
    cout<<"reversed sentences is :"<<str;
    return 0;
}