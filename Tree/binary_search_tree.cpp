#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* inserttoBST(node* &root, int d){
    //base condition
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d<root->data){
        root->left=inserttoBST(root->left,d);
    }
    else{
        root->right=inserttoBST(root->right,d);
    }
    return root;
}
void takeinput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=inserttoBST(root,data);
        cin>>data;
    }

}
void levelodering(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        if(temp==NULL){
            //purana vala level complete ho chuka hi
            cout<<endl;
            if(!q.empty()){
                //queue has some child node
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
bool searchinBST(node* root, int x){
    node* temp=root;
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        if(x>temp->data){
            temp=root->right;
        }
        else{
            temp=root->left;
        }
    }
    return false;
}
node* minval(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
node* maxval(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
node* deletefromBST(node* &root, int val){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child

        //left child
         if(root->left!=NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;

         }
         //right child
         if(root->left==NULL && root->right!=NULL){
            node* temp=root->right;
            delete root;
            return temp;

         }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right, mini);
            return root;
        }


    }
    else if(root->data>val){
        //left part me jao
        root->left=deletefromBST(root->left,val);
        return root;
    }
    else{
        //right part me jao
        root->right=deletefromBST(root->right,val);
    }
}
int main(){
    //50 20 70 10 30 90 110 -1
    node* root=NULL;
    cout<<"enter the element"<<endl;
    takeinput(root);
    cout<<"printing the bst"<<endl;
    levelodering(root);
    cout<<endl<<"checking the number"<<endl;
    // if(searchinBST(root,8)){
    //     cout<<"number is present"<<endl;
    // }
    // else{
    //     cout<<"number is not present"<<endl;
    // }
    //10 8 21 7 27 5 4 3 -1
    cout<<minval(root)->data<<endl;
    cout<<maxval(root)->data<<endl;
    cout<<"after the deletion from BST"<<endl;
    root=deletefromBST(root,30);
     cout<<"printing the bst"<<endl;
    levelodering(root);
    

      
}