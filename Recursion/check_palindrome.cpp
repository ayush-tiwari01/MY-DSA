#include<iostream>
using namespace std;
bool checkpalindrome(string str , int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkpalindrome(str ,i+1,j-1);
    }
}
int main(){
    string str ="noon";
     bool ans=checkpalindrome(str,0,str.length()-1);
    if(ans){
        cout<<"this is the palindrome number";
    }
    else{
        cout<<"this is not the palindrome number";
    }
}