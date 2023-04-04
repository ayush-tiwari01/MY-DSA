#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data for inserting in left of  " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter the data for inserting in right of  " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelodering(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana vala level complete ho chuka hi
            cout << endl;
            if (!q.empty())
            {
                // queue has some child node
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void buildfromlevelorder(node *&root)
{
    queue<node *> q;
    cout << "enter the data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter left node for: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != 1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "enter right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != 1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //  20 15 30 40 50 12 18 35 80 7
    //  cout<<"print the level order traversal"<<endl;
    //  levelodering(root);
    //  cout<<"inorder traversal"<<endl;
    //  inorder(root);
    //  cout<<endl;
    //  cout<<" pre order traversal"<<endl;
    //  preorder(root);
    //  cout<<endl;
    //  cout<<"post order element"<<endl;
    //  postorder(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1
    buildfromlevelorder(root);
    levelodering(root);
}