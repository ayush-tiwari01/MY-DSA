#include<iostream>
using namespace std;
int findduplicate(int arr[], int n){
    int ans=0;
    //XOR in all array element 
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    //XOR [1,n-1]
     for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
     int n;
    cout << "enter the size" << endl;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Duplicate number is "<<endl;
    int x= findduplicate(arr,n);
    cout<<x;
}