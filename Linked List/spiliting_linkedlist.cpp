//Ayush Tiwari
//2100320100049
//Section-A
//spiliting the linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
  void insertionattail(Node* &tail, int d){
      Node* temp=new Node(d);
      tail->next=temp;
      tail=temp;
    }
void print(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void spilitting(Node* &head, int k){
    if(head==NULL){
        return;
    }
    Node*curr=head;
    Node* temp=head;
    int count=1;
    while(count<k){
        temp=temp->next;
        count++;
    }
    Node* forward=temp->next;
    temp->next=NULL;
    cout<<endl;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    spilitting(forward,k);

}
int main(){
    Node* tail1=new Node(10);
    Node* head1=tail1;
    insertionattail(tail1,20);
    insertionattail(tail1,30);
    insertionattail(tail1,40);
    insertionattail(tail1,50);
    insertionattail(tail1,60);
    print(head1);
    spilitting(head1,2);
}