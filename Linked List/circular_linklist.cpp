#include <iostream>
#include <map>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};
void insertnode(node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non empty list
        // assuming that element present in the list
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found-> curr is representing vala node
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *&tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deletenode(node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty check again" << endl;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 node link list
        if (curr == prev)
        {
            tail = NULL;
        }
        //>=2 node link list
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
bool iscircular(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    if (temp == NULL)
    {
        return false;
    }
}
bool detectloop(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
node *floyddetectionloop(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "present at" << slow->data << endl;
        }
    }
    return NULL;
}
node *getstartingnode(node *head)
{
    if (head == NULL)
        return NULL;
    node *intersection = floyddetectionloop(head);
    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeloop(node *head)
{
    if (head == NULL)
        return;
    node *startOfLoop = getstartingnode(head);
    node *temp = startOfLoop;
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{

    node *tail = NULL;
    insertnode(tail, 5, 3);
    print(tail);
    insertnode(tail, 3, 5);
    insertnode(tail, 5, 10);
    insertnode(tail, 10, 30);
    insertnode(tail, 30, 40);
    print(tail);
    // deletenode(tail,3);
    // print(tail);

    if (iscircular(tail))
    {
        cout << "link list is the circular" << endl;
    }
    else
    {
        cout << "bhai link list is not circular" << endl;
    }
    if (iscircular(tail))
    {
        cout << "link list is the circular" << endl;
    }
    else
    {
        cout << "bhai link list is not circular" << endl;
    }
    return 0;
}