#include<iostream>
using namespace std;
class node{
    public:
   int data;
   node*prev;
   node*next;
   node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
   }
};
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void insertionattail(node* &tail, int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
int min(){
    node* node1=new node(3);
    node*tail=node1;
    node*head=node1;
    insertionattail(tail,5);
    print(head);
    return 0;


}