#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int t=arr[i];
        int j=i-1;
        while(arr[j]>t && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,54,65,7,23,9};
    int n=6;
    insertionsort(arr,n);
}