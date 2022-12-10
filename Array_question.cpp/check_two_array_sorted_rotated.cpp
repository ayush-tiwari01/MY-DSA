#include<iostream>
using namespace std;
bool check_sorted_rotated_array(int arr[], int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
        if(arr[0]<arr[n-1]){
            count++;
        }
    }
    return count<=1;
}
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[10];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check_sorted_rotated_array(arr,n)){
        cout<<"it is rotated or sorted array";
    }
    else{
        cout<<"it is not sorted or rotated array"<<endl;
    }
}