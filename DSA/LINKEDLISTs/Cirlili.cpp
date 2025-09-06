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
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    //empty lsit
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
        return;
    }
    else{
        //non empty list
        //assuming that element is present in the lists
        Node* curr=tail;
        Node* start=tail;
        do{
            if(curr->data==element){
                Node* temp=new Node(d);
            }
        }
    }
}
void print(Node* tail){
    Node* temp=tail;
    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    //if list is not empty
    do{
        cout<<tail->data<<" "<<endl;
        tail=tail->next;
    }
    while (tail!=temp);
}

void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"list empty"<<endl;
        return;
    }
    else{
        Node* prev =tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1
        if(curr==prev){
            tail=NULL;
        }
        //>2
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    insertNode(tail,9,4);
    // insertNode(tail,6,6);
    // insertNode(tail,2,2);
    // insertNode(tail,7,3);
    cout<<endl;
    deleteNode(tail,3);
    print(tail);
    return 0;
}