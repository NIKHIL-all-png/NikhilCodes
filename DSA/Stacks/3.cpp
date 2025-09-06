#include<iostream>
#include<stack>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }
    void push(char element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<" stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
            return arr[top];

        }
        else{
            cout<<"empty";
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
void deletemiddle(Stack &st,int count,int size){
    //base case
    if(count==(size/2)){
        st.pop();
        return;
    }
    int num= st.peak();
    st.pop();
    //recursive call
    deletemiddle(st,count+1,size);
    st.push(num);
}
void print(Stack st,int size){
    int p=size;
    

}
int main(){
    Stack st(5);
    int n=5;
    // string str="babbar";
    // stack<char> s;
    // for(int i=0;i<str.length();i++){
    //     char s=str[i];
    //     st.push(s);
    // }
    // string ans="";
    // while(st.isempty()){
    //     char ch=st.peak();
    //     ans.push_back(ch);
    //     st.pop();
    // }
    // cout<<ans;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(1);
    st.push(0);
    int count=0;
    deletemiddle(st,count,n);
    for(int i=0;i<4;i++){
        cout<<st.peak();
        st.pop();
    }
    print(st,n);
}  