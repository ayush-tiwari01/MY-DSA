//two pointer approach in sorting  0 and 1;
#include<stdio.h>
void printarray(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void sort(int a[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(a[i]==0 &&i<j){
            i++;
        }
        while(a[j]==1 && i<j){
            j--;
        }
        if(i<j){
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;
            j--;
        }
    }
}
int main(){
    int a[]={0,1,0,0,0,1,0};
    int n=7;
    printarray(a,n);
    sort(a,n);
    printf("\n");
    printarray(a,n);
}