#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cout<<"Enter the roman Number"<<endl;
    cin>>s;
        map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      int total=0;
      for(int i=0;i<s.length();i++){
        if(m[s[i+1]]<=m[s[i]]){
            total=total+m[s[i]];
        }
        else{
           total=total-m[s[i]]; 
        }
      }
      cout<<"Roman To integer "<<total<<endl;
}