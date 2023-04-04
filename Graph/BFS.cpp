#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    int v,e;
    cout<<"how many vertices are there in the graph"<<endl;
    cin>>v;
    cout<<"how many edges are there in the graph"<<endl;
    cin>>e;
    vector<int>Adjlist[v];
    for(int i=1;i<=e;i++){
        cout<<"enter the end point o the edges"<<endl;
        int a,b;
        cin>>a>>b;
        Adjlist[a].push_back(b);
        Adjlist[b].push_back(a);
    }
    for(int i=0;i<v;i++){
        cout<<i<<":";
        for(int j=0;j<Adjlist[i].size();j++){
            cout<<Adjlist[i][j]<<",";
        }
        cout<<endl;
    }
    queue<int>q;
    unordered_map<int,bool>visited;
    vector<int>ans;
    q.push(0);
    visited[0]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(int i=0;i<v;i++){
            for(auto j: Adjlist[i]){
            if(!visited[j]){
                q.push(j);
                visited[j]=true;
            }
            }
        }

    }
    for(auto i:ans){
        cout<<i<<" ";
    }

}