 #include<iostream>
 using namespace std;
 // check valid character or not
 bool valid(char ch){
        if( (ch>='a' && ch<='z')||(ch>='A' &&  ch<='Z')||(ch>='0' && ch<=9)){
            return 1;
        }
        return 0;
    }
    //palindrome  check kar bhai
bool palindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
//bhai upper case ko lower case me kar de
char lowercase(char ch){
    if((ch>='a'&&ch>='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        char temp =ch-'A'+'a';
        return temp;
    }
}
    bool isPalindrome(string s) {
        string temp= "";
        //valid element ik new string me daal de
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=lowercase(temp[j]);
        }
         return palindrome(temp);
        
    }
    int main(){
          string str;
   getline (cin, str);
//    cout<<isPalindrome(str);
   if(isPalindrome(str)){
    cout<<"This is a palindrome string"<<endl;
   }
   else{
    cout<<"this is not a palindrome string";
   }
    }