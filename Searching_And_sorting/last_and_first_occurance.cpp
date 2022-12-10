#include<iostream>
using namespace std;
int firstoccur(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid =(s+e)/2;
    while (s<=e)
    {
        
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =(s+e)/2; 
    }  
    return ans; 
}
int lastoccur(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid =(s+e)/2;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
         else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =(s+e)/2;
    }   
    return ans;
}
int main(){
    
    int arr[6]={1,2,3,3,3,4};
   
    int x = firstoccur(arr,6,3);
    cout<<x<<endl;;
    int y=lastoccur(arr,6,3);
    cout<<y;
}