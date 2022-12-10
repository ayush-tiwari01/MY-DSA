#include<iostream>
using namespace std;
 void print(int *arr, int s, int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int binarysearch(int *arr,int s, int e, int key){
    print(arr,s,e);
     int mid=(s+e)/2;
      cout<<"mid  "<<mid<<endl;
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
      binarysearch(arr,0,mid-1,key);
    }
    else{
       binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[17]={2,4,6,8,10,12,14,16,18,20,22,24,26,30,35,39,40};
   int ans=binarysearch(arr,0,17,4);
    cout<<ans;

}