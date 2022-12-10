#include<iostream>
#include<limits.h>
using namespace std;
int largestsum(int a[][4]){
   int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        int index=-1;
        for(int j=0;j<4;j++){
            sum=sum+a[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            index=i;
        }
            }
        cout<<endl;
 return maxi;

}
void colwisesum(int a[][4]){
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<4;i++){
            sum=sum+a[i][j];
        }
        cout<<sum<<" ";
            }
        cout<<endl;

}
//print row-wisw sum
void rowwisesum(int a[][4]){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+a[i][j];
        }
        cout<<sum<<" ";
            }
        cout<<endl;

}
bool ispresent(int a[][4], int key){
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==key){
                return 1;
            }
        }
    }
return 0;
}
int main(){
    int a[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"enter the number is to be searched"<<endl;
    cin>>key;
    if(ispresent(a,key)){
        cout<<"element is  found"<<endl;
    }
    else{
        cout<<"element is not found";
    }
    cout<<"printing the sum row wise"<<endl;
    rowwisesum(a);
    cout<<"printing the sum column wise"<<endl;
    colwisesum(a);
    cout<<"maximum sum rowwise"<<endl;
    cout<<largestsum(a);

}