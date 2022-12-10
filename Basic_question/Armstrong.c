#include<stdio.h>
void alternatereverse(int a[], int n){
    for(int i=0;i<n;i+=2){
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
}
int main(){
    int a[]={3,1,2,7,11,8};
    int n=6;
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");

    alternatereverse(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}