#include<iostream>
using namespace std;
bool issorted(int *arr, int n){
   if(n==0||n==1){
    return true;
   }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1 , n-1);
    }
}
int main(){
    int arr[5]={2,4,6,8,10};
    issorted(arr, 5);
    if(issorted(arr, 5)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }

}