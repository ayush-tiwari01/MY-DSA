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
void  uniqueSortedList(node * head) {
    if(head==NULL){
    //return NULL;
    }
    node* curr = head;
    while(curr != NULL){
    if(curr->data==curr->next->data && (curr->next!=NULL)){
        node* next_next=curr -> next -> next;
        node* to_delete=curr -> next;
        delete(to_delete);
        curr -> next=next_next;
    }
        else{
            curr=curr -> next;
        }
}
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}cout<<endl;
    
}
void reverselinklist(node* &head){
    if(head==NULL || head->next==NULL){
        // return head;
    }
    node* prev=NULL;
    node*curr=head;
    node*forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    // return prev;
    node*temp=prev;
    while(prev!=NULL){
        cout<<prev->data<<" ";
        prev=prev->next;
    }cout<<endl;

}
int main(){
    node* node1=new node(3);
    node*tail=node1;
    node*head=node1;
    insertionathead(head,5);
    insertionathead(head,5);
    insertionathead(head,9);
    insertionathead(head,10);
    print(head);
    //insertionatposition(tail,head,1,15);
    //print(head);
    //reverselinklist(head);
    // print(head);
  uniqueSortedList(head);



}