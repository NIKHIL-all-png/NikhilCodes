#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val=this->data;
        if(next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free"<<endl;
    }
};
void insertathead(Node* &head,int d){

}
void deleteatnode(int position,Node* &head){
    //deleting first and starting node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any midddle node or last node
        Node* curr= head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    cout << getlength(head);
    insertathead(head, 15);
    print(head);
    cout << getlength(head);
    print(head);
    return 0;
}