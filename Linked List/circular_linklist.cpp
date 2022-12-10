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
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};
void insertnode(node* &tail, int element, int d){
    //empty list
  if(tail==NULL){
    node* newnode =new node(d);
    tail=newnode;
    newnode -> next=newnode;

  }
  else{
    //non empty list
    //assuming that element present in the list
    node* curr=tail;
    while(curr->data!=element){
        curr=curr->next;
    }
    //element found-> curr is representing vala node 
    node*temp =new node(d);
    temp->next=curr->next;
    curr->next=temp;
  }
}
void print(node* &tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while(tail!=temp);
   cout<<endl;
}
void deletenode(node* &tail, int value){
    if(tail==NULL){
        cout<<"list is empty check again"<<endl;
    }
    else{
        node*prev=tail;
        node*curr=prev->next;
        while(curr->data != value){
            prev=curr;
            curr=curr->next;
            
        }
        prev->next=curr->next;
        // 1 node link list 
        if(curr==prev){
            tail=NULL;
        }
        //>=2 node link list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
    
}
int main(){
    node*tail =NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    insertnode(tail,5,10);
    insertnode(tail,10,30);
    insertnode(tail,30,40);
    print(tail);
    deletenode(tail,3);
    print(tail);
    return 0;
    
}