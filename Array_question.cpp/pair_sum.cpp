#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s;
    cout<<"enter the sum value"<<endl;
    cin>>s;
    int j;
 for(int i=0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(arr[i]+arr[j]==s){
            cout<<i<<" "<<j<<endl;
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
 }
}