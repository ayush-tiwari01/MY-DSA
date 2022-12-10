#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m,int arr[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            arr[k]=arr2[j];
            j++;
            k++;
            
            
        }
        else if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
             i++;
             k++;
             j++;
             
        }
    }
    while(i<n)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void array(int ans[], int p){
    for(int k=0;k<p;k++){
        cout<<ans[k]<<"";
    }
} 
int main(){
    int arr1[]={1,2,4,8};
    int arr2[]={5,6,9};
    int arr[]={0};
    merge(arr1,4,arr2,3,arr);
    array(arr,7);

}