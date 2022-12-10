#include<iostream>
using namespace std;
char lowercase(char ch){
    if(ch>='a'&&ch>='z'){
        return ch;
    }
    else{
        int temp =ch-'A'+'a';
    }
}
bool palindrome(char name[], int n){
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++){
        if(lowercase(name[s])!=lowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char name[]){
     int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reversestring(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    cout<<name<<endl;
}
int main(){
    char name[20];
    char surname[20];
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<name<<endl;
    cout<<"enter your surame"<<endl;
    cin>>surname;
    cout<<surname;
   int len = getlength(name);
   cout<<len<<endl;
   reversestring(name,len);
   if(palindrome(name,len)){
    cout<<"this is palindrome string"<<endl;
   }
   else{
    cout<<"this is not a palindrome string"<<endl;
   }
   cout<<lowercase('S');

}