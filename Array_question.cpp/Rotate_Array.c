//Given an array, rotate the array to the right by k steps, where k is non-negative.
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int k=2;
   int c[50];
   for(int i=0;i<n;i++){
       c[(i+k)%n]=a[i];
   }
    
     for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
   
   
}