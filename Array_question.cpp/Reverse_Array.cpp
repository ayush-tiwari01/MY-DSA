#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,6,9,13};
    int n=5;
    reverse(arr,n);
}