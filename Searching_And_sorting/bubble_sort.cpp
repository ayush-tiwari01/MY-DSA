#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    //for number of rounds
    //n-1 rounds
    for(int i=1;i<n;i++){
        //for to place large element in the last
        //first 0-n-1
        //second 0-n-2
        //third 0-n-3
        //fourth 0-n-4
        bool swapped =false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped =true;
            }
        }
         if(swapped==false){
        break;
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,5,9,3,7};
    int n=6;
    bubblesort(arr,n);
}
//The bubble sort is at its best if the input data is sorted. i.e. 
//If the input data is sorted in the same order as expected output. This can be achieved by using one boolean variable. The boolean variable is used to check whether the values are swapped at least once in the inner loop.