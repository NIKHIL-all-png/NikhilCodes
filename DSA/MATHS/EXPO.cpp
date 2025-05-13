#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ENter any number n"<<endl;
    cin>>a;
    cout<<"Power"<<endl;
    cin>>b;
    int c=b/2;
    int ans=1;
    for(int i=1;i<=c;i++){
        ans=ans*a;
    }
    ans=ans*ans;
    if(b%2==0){
        cout<<ans;
    }
    else{
        cout<<ans*a;
    }
    return 0;
}

