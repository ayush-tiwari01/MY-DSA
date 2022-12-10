#include<iostream>
using namespace std;
void update(int *p){
    *p=*p+1;   
}
int getsum(int *arr , int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum + arr[i];
    }
    return sum;
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int *p=&n;
    cout<<"before : "<<*p<<endl;
    update(p);
    cout<<"after : "<<*p<<endl;
    cout<<getsum(arr+2,2)<<endl;
    cout<<getsum(arr+2,3)<<endl;

}