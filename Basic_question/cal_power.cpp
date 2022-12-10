#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number of which power to be find"<<endl;
    cin>>a;
    cout<<"enter the power"<<endl;
    cin>>b;
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    cout<<ans<<endl;
}