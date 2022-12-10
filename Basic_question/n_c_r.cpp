#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int num= fact(n);
    int deno = fact(r)*fact(n-r);
    return num/deno;

}
int main(){
    int n,r;
    cout<<"enter the n"<<endl;
    cin>>n;
    cout<<"enter the r"<<endl;
    cin>>r;
    int ans = ncr(n,r);
    cout<<ans;

}