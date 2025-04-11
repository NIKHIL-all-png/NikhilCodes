#include<iostream>
using namespace std;

int checkpalindrome(char name[],int p){
    //int c=1;
    int s=0;
    int e=p-1;
    while(s<e){
        if(name[s] != name[e]){
            
            return -1;
            
        }
        s++;
        e--;
        
    }
    return 1;

}

int length(char name[]){
    int count=0;
    while(name[count] != '\0'){
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
    
    int result=checkpalindrome(name,p);

    if(result==1){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
    
    return 0;
}