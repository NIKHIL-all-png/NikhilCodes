#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_Front(int val){
        Node *newnode=new Node(val);//dynamic
        //Node newnode(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        newnode->next =head;
    }
    void printll(){

    }
};    
int main(){
    list ll;
    ll.push_Front(1);
    ll.push_Front(2);
    ll.push_Front(3);
    ll.printll();
    return 0;
}
