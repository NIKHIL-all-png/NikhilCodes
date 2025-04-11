#include<iostream>
using namespace std;
int main(){
    char str[7]="nikhil";
    int count=0;
    while(str[count] != '\0'){
        count++;
    }

    int n=count;
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    cout<<str;

}