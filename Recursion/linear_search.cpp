#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<" size of the array"<<n <<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearsearch(int arr[], int n, int key){
    print(arr,n);
    if(n==0){
        return false;
    }
    if (arr[0]==key)
    {
        return true;
    }
    
    else{
        linearsearch(arr+1,n-1,key);
    }
}
int main(){
    int arr[5]={2,4,6,8,10};
    bool ans=linearsearch(arr,5,10);
    cout<<ans;

}