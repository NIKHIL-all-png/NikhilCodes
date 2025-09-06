#include <iostream>
#include<map>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        cout<<"present of an element"<<endl;
    }
};
void InsertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}
bool detectLoop(Node* &head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp=head;
    while(temp!= NULL){
        //cycle is present
        if(visited[temp]==true){
            cout<<"present of an element"<<temp->data<<endl;
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
Node* floydetectloop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){ 
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
Node* startingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydetectloop(head);
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void remov(Node*head){
    if(head==NULL){
        return;
    }
    Node* startofloop=startingNode(head);
    Node* temp=startofloop;
    while(temp->next!=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node* tail=node1;
    InsertAtHead(head,tail,15);
    InsertAtHead(head,tail,18);
    tail->next=head->next;
    int p=detectLoop(head);
    if(floydetectloop(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }
    Node* loop=startingNode(head);
    cout<<"Loop start at "<<loop->data<<endl; 
    return 0;
}