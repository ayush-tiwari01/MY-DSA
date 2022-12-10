#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(node*& head){
      node* temp=head;
      int len=0;
    while(temp!=NULL){
       len++;
        temp=temp->next;
    }
    return len;
}
void insertionathead(node* &head, int d){
    node* temp= new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertionattail(node* &tail, int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
void insertatposition(node* &head,node* &tail, int position, int d){
       if (position == 1)
    {
        insertionathead(head, d);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last position

    if (temp->next == NULL)
    {
        insertionattail(tail, d);
        return;
    }

    // creating new node
    node *nodetoinsert = new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert->next;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertionathead(head,20);
    print(head);
    insertionattail(tail,50);
    print(head);
    insertatposition(head,tail,4,30);
    print(head);


}