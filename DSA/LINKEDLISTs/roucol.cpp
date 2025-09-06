#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
        return;
    }
    else{
        //non empty list → search for element
        Node* curr=tail;
        Node* start=tail;

        do {
            if(curr->data == element) {
                Node* temp=new Node(d);
                temp->next=curr->next;
                curr->next=temp;

                // if inserting after tail, update tail
                if(curr==tail){
                    tail=temp;
                }
                return;
            }
            curr=curr->next;
        } while(curr!=start);

        cout<<"Element "<<element<<" not found"<<endl;
    }
}

void print(Node* tail){
    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    //if list is not empty
    Node* temp=tail->next; // start from head
    do{
        cou
