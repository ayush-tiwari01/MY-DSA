#include<iostream>
#include<string.h>
string removeoccurance(string s, string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
using namespace std;
int main(){
    string s;
    string part;
    cout<<"enter the string"<<endl;
    cin>>s;
    cout<<"enter the part"<<endl;
    cin>>part;
    removeoccurance(s,part);
}