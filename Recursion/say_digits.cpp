#include<iostream>
using namespace std;
int saydigits(int n, string arr[]){
    //base condition
    if(n==0){
        return 0;
    }
    //processing part
    int digit=n%10;
    n=n/10;
    //r.c
    saydigits(n,arr);
    cout<<arr[digit]<<" ";

}
int main(){
    string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    saydigits(n,arr);

}