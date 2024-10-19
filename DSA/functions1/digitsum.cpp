#include<iostream>
using namespace std;

int digitsum(int x){
    int sum =0;
    
    while(x > 0){
         x=x/10;
        if(x==23)continue;
        int lastdigit=x % 10;
       
        sum =sum + lastdigit;
        
        
        
    }
    return sum;
}

int main(){
    cout<<digitsum(2356)<<endl;
    return 0;
}