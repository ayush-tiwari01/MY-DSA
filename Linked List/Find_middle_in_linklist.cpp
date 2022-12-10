#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node* next;
  node(int d){
    this->data=d;
    this->next=NULL;
  }
};
void insertionathead(node* &head, int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertionattail(node* &tail, int d){
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;


}
void insertionatposition(node* &tail,node* &head,int position, int d){
    if(position==1){
        insertionathead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        cnt++;
        temp=temp->next;
    }
    //insetion at last position
    if(temp->next==NULL){
        insertionattail(tail,55);
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* getmiddle(node* head){
    if(head==NULL || head->next==NULL){
     return head;
    }
    // 2 node 
    if(head->next->next==NULL){
      return head->next;
    }
    node* fast=head->next;
    node* slow=head;
    while(fast!=NULL){
   fast=fast->next;
        if(fast!=NULL){
      fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
void printreverse(node*){

}
int main(){
    node* node1=new node(3);
    node*tail=node1;
    node*head=node1;
    insertionathead(head,5);
    insertionathead(head,7);
    insertionathead(head,9);
    insertionathead(head,10);
    print(head);
    //insertionatposition(tail,head,1,15);
    // print(head);
    node* temp;
     cout<<getmiddle(head);
    // print(head);


}