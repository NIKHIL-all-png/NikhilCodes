#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){ 
        return ans*ans;
    }
    if(b%2 != 0){
        return a*ans*ans;

    }
    return 1;
}

int main() {
   int a;
   int b;
   cin>>a;
   cin>>b;
   int p=power(a,b);
   cout<<p;
}
