#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<" size of the array"<<n <<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int arraysum(int *arr, int n){
    int sum=0;
    print(arr,n);
    cout<<"sum is "<<sum<<endl;
    if(n==1){
        return arr[0];
    }
     arraysum(arr+1, n-1);
     sum=arr[0]+sum;
     return sum;
}
int main(){
    int arr[5]={2,4,6,8,10};
    cout<<"hi"<<endl;
     int ans=arraysum(arr,5);

     cout<<" answer is "<<ans<<endl;
    cout<<"sab badiya"<<endl;
}