  #include<iostream>
  using namespace std;
  bool checkeual(int a[26], int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
           
        }
        return 1;
  }  
 bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }
        //traverse s2 string  in window size of s1 lenght and compare
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        //running for first window
        while(i<windowsize&&i<s2.length()){
            int index =s2[i]-'a';
            count2[index]++;
            i++;

        }
        if(checkeual(count1, count2)){
            return 1;
        }
        //second window
        while(i<s2.length()){
            char newchar=s2[i];
            int index = s2[i]-'a';
            count2[index]++;
            char oldchar=s2[i-windowsize];
             index =oldchar-'a';
            count2[index]--;
            i++;
            if(checkeual(count1, count2)){
                return 1;
            }
        }
        return 0;  
    }
    int main(){
        string s1;
        cout<<"enter the string"<<endl;
        cin>>s1;
        string s2;
        cout<<"enter the string"<<endl;
        cin>>s2;
        bool y=checkInclusion(s1,s2);
        cout<<y;

    }