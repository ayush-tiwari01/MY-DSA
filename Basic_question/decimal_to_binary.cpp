#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit =(n&1);
        //this is for reverse the number
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
    
}