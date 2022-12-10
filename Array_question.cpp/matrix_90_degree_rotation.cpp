#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[20][20];
    int c[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[j][i];
        }
    }
    cout<<"Transpose "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int t=c[i][j];
            c[i][j]=c[i][n-j-1];
            c[i][n-j-1]=t;
        }
    }
    cout<<"90 rotation of matrix"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}