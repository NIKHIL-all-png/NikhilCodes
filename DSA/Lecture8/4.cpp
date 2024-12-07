#include<iostream>
using namespace std;
void counting(int n){
    //Function body
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    counting(n);//Function body
    return 0;
}