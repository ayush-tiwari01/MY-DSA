#include<iostream>
using namespace std;
int findpivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        mid=(s+e)/2;

    if(arr[mid]>=arr[0]){
          s=mid+1;
    }
    else{
        e=mid;
    }
    }
    return e;
}
int main(){
    int arr[6]={2,4,5,8,3,1};
    int y=findpivot(arr,6);
    cout<<y;
}