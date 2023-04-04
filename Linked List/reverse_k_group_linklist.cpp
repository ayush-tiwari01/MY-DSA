#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int getlength(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;
}
Node *kGroups(Node *&head, int k, int length)
{
    // base case

    if (head == NULL)
    {
        return NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *frwd = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
        count++;
    }
    // step2: Recursion dekhlega aage ka
    if (frwd != NULL)
    {
        head->next = kGroups(frwd, k,length-k);
    }

    return prev;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int data)
{
    // create new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
int main()
{
    // create node
    Node *node1 = new Node(11);
    Node *tail = node1;
    Node *head = node1;
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 16);
    print(head);
    int length=getlength(head);
    kGroups(head, 2,length);
    print(head);
} 