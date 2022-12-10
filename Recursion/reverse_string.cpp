#include<iostream>
using namespace std;
void reverse(string& s , int i,int j){
    cout<<" call recieved for  "<<s<< endl;;
    if(i>j){
        return;
    }
    swap(s[i++],s[j--]);
    reverse(s,i,j);

}
int main(){
    string name ="ayush";
    reverse(name, 0, name.length()-1);
    cout<<name;

}