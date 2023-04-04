#include<iostream>
#include<stack>
using namespace std;
int main(){
    string name ="Tiwari";
    stack<char>s;
    for(int i=0;i<name.length();i++){
        s.push(name[i]);
    }
    string ans="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<"Reverse string is:- "<<ans<<endl;

}