#include<iostream>
using namespace std;
int linearsearch(int *arr,int n, int k){
   for(int i=0;i<n;i++){
    if(arr[i]==k){
        return i;
    }
   }
   return -1;
}
int main(){
    int arr[5]={2,4,6,8,10};
    int ans=linearsearch(arr,5,10);
    cout<<ans;
}