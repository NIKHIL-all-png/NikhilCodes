#include <iostream>
#include <stack>
using namespace std;
class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow";
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
int main()
{
    Stack s(4);
    s.push(2);
    s.push(3);
    s.pop();
    cout << s.peak()<<endl;
    if (s.isempty())
    {
        cout << " stack is  empty";
    }
    else
    {
        cout << "Stack isnot empty";
    }
    return 0;
}