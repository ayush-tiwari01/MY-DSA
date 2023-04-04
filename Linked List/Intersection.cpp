#include <iostream>
#include<map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};
void insertathead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertattail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last position

    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating new node
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void deletenode(int position, Node *&head)
{
    // deletion at head or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting node at any position
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void reverse(Node* &head){
    Node*curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
}
void intersectionLL(Node* &head1,Node* &head2){
    Node* p=head1;
    Node* q=head2;
    Node* head3=NULL;
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
            // insertathead(head3,p->data);
            p=p->next;
        }
        else if(p->data>q->data){
            // insertathead(head3,q->data);
            q=q->next;
        }
        else{
            insertathead(head3,p->data);
            p=p->next;
            q=q->next;
        }
    }
    // while(p!=NULL){
    //     insertathead(head3,p->data);
    //         p=p->next;
    // }
    // while(q!=NULL){
    //     insertathead(head3,q->data);
    //         q=q->next; 
    // }

}
int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertattail(tail, 12);
    // print(head);
    insertattail(tail, 15);
     insertattail(tail, 25);
      insertattail(tail, 30);
    // print(head);
    // insertatposition(tail,head,4,22);
    // print(head);
   // deletenode(3, head);
     print(head);
     reverse(head);
    //  cout<<ans<<endl;
     print(head);
    // cout<<"Head-: "<<head->data<<endl;
    // cout<<"Tail-: "<<tail->data<<endl;
}