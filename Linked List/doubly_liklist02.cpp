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
void insertionathead(node* &tail,node* &head, int d){
    if(head==NULL){
  node* temp= new node(d);
  head=temp;
  tail=temp;
    }
    else{
        node* temp= new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertionattail(node* &tail,node* &head, int d){
    if(tail==NULL){
        node* temp =new node(d);
        tail=temp;
        head=temp;

    }
    else{
         node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

    }
}
void insertatposition(node* &head,node* &tail, int position, int d){
       if (position == 1)
    {
        insertionathead(tail,head, d);
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
        insertionattail(tail,head, d);
        return;
    }

    // creating new node
    node *nodetoinsert = new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert->next;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

}
void deletenode(int position, node* &head){
    if(position==1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        // temp->next=NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev= NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    // print(head);
    // cout<<getlength(head)<<endl;
    insertionathead(tail,head,20);
    // print(head);
    insertionattail(tail,head,50);
    // print(head);
    // insertatposition(head,tail,3,30);
    // print(head);
    // deletenode(1,head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    insertionattail(tail,head,70);
     print(head);
     deletenode(1,head);
     cout<<head->data<<endl;
     cout<<tail->data<<endl;


}