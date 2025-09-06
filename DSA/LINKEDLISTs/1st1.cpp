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
class Circularlist{
        Node* head;
        Node* tail;
        public:
        Circularlist(){
            head=tail=NULL;
        }
        void insertathead(int val){
            Node* newnode=new Node(val);
            if(tail==NULL){
                tail=head=newnode;
                tail->next=head;

            }
            else{
                newnode->next=head;
                head=newnode;
                tail->next=head;
            }
        }
        void print(){
            if(head==NULL){
                return ;
            }
            cout<<head->data<<"->";
            Node* temp=head->next;
            while(temp != head){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<head->data<<endl;
        }
};

int main(){
    Circularlist cll; 
    cll.insertathead(1);
    cll.insertathead(2);
    cll.insertathead(3);
    cll.print();
    return 0;
}