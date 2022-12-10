#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the a value"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation"<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<"Add IS  "<<(a+b)<<endl;
        break;
        case '-':cout<<"substract is  "<<(a-b)<<endl;
        break;
        case '*':cout<<"multiply is  "<<(a*b)<<endl;
        break;
        case '%':cout<<"modulo is  "<<(a%b)<<endl;
        break;
        case '/':cout<<"divide is  "<<(a/b)<<endl;
    }
}