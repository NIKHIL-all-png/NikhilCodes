#include<iostream>
#include<vector>
using namespace std;
int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(i==1){
            ans.push_back(1);
        }
        else if(i==2){
            ans.push_back(2);
        }
        else if(i>2){
            if(isprime(i)){
                ans.push_back(i);
            }
        }
    }
    int p=ans.size();
    cout<<p;
    
    
}