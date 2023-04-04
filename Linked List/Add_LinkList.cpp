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
Node *addLinkedList(Node *first, Node *second)
{
    int carry = 0;
    Node *ansTail = NULL;
    Node *ansHead = NULL;
    while (first != NULL && second != NULL)

    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        Node *temp = new Node(digit);
        insertAtTail(ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }
    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        Node *temp = new Node(digit);
        insertAtTail(ansTail, digit);
        carry = sum / 10;
        first = first->next;
    }
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        Node *temp = new Node(digit);
        insertAtTail(ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        Node *temp = new Node(digit);
        insertAtTail(ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }
    return ansHead;
}
Node *reverseLinkedList(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *frwd = NULL;
    while (curr != NULL)
    {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
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
    if(tail==NULL){
       tail=temp;
    }
    tail->next = temp;
    tail = temp;
}
int main()
{
    // First Linked List
    Node *node1 = new Node(3);
    Node *head1 = node1;
    Node *tail1 = node1;
    insertAtTail(tail1, 4);
    cout << endl;
    cout << "First Linked List is " << endl;
    print(head1);
    cout << "head1 is : " << head1->data << endl;
    cout << "tail1 is : " << tail1->data << endl;

    // Second Linked List
    Node *node2 = new Node(2);
    Node *head2 = node2;
    Node *tail2 = node2;
    insertAtTail(tail2, 3);
    insertAtTail(tail2, 0);
    cout << endl;
    cout << "Second Linked List is " << endl;
    print(head2);
    cout << "head2 is : " << head2->data << endl;
    cout << "tail2 is : " << tail2->data << endl;
    cout << endl;
    Node *first = reverseLinkedList(head1);
    cout << "First reversed Linked List is " << endl;
    print(first);
    cout << endl;
    Node *second = reverseLinkedList(head2);
    cout << "Second reversed Linked List is " << endl;
    print(second);
    cout << endl;
    Node *head3 = addLinkedList(first, second);
    print(head3);
}