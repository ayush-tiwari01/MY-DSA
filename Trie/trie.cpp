#include<iostream>
using namespace std;
class Trienode{
    public:
    char data;
    Trienode* children[26];
    bool isterminal;
    Trienode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
            isterminal=false;
    }
};
class Trie{
    public:
    Trienode* root;
    Trie(){
        root=new Trienode('\0');
    }
    void insertutil(Trienode* root, string word){
        //base case
        if(word.length()==0){
            root->isterminal=true;
            return;
        }
        //assumption, word will be in caps
        int index=word[0]-'A';
        Trienode*child;
        //present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            //absent
            child=new Trienode(word[0]);
            root->children[index]=child;
        }
        //recursion
        insertutil(child,word.substr(1));
    }
        //recursion
        void insertword(string word){
            insertutil(root,word);
        }

        bool searchutil(Trienode* root, string word){
            //base case 
            if(word.length()==0){
                return root->isterminal;
            }
            int index=word[0]-'A';
            Trienode* child;
            //presnt
            if(root->children[index]!=NULL){
                child=root->children[index];
            }
            else{
                //absent
                return false;
            }
            //recursion 
            return searchutil(child, word.substr(1));
        }
        bool searchword(string word){
            return searchutil(root, word);
        }
    
};
int main(){
    Trie *t=new Trie();
    t->insertword("ABCD");
    t->insertword("TIME");
    cout<<"present or not"<<t->searchword("ABCD")<<endl;
return 0;

}