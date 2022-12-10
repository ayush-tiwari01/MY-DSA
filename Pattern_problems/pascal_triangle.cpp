#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 for(int i=1;i<=n;i++){
    //print space karo
    for(int s=n-i;s>0;s--){
        cout<<" ";
    }
    //first triangle print karo
    for(int f=1;f<=i;f++){
        cout<<f;
    }
    //third triangle print karo
    for(int t=i-1;t>0;t--){
        cout<<t;
    }
    cout<<endl;
 }
}