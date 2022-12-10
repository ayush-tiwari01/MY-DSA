#include<iostream>
using namespace std;
 void printarray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int partition(int *arr, int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
          cnt++;
        }
    }
    int pivotindex=cnt+s;
    //place the pivot at the right place
    swap(arr[pivotindex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotindex;
}
void quicksort(int *arr, int s, int e){
    //base condition
    if(s>=e){
        return;
    }
    //partion karenge
    int p= partition(arr,s,e);
    //right vala part sort karenge
    quicksort(arr,s,p-1);
    //left vala part sort karenge
    quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={1,9,2,78,3};
    int n=5;
    printarray(arr,5);
    quicksort(arr,0,4);
    cout<<endl;
    cout<<"dekha ho gaya na sorted array "<<endl;
    printarray(arr,5);
}