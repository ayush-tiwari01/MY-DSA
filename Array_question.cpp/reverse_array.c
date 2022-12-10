//using two pointer approach to reverse the array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    int s=0;
    int e=n-1;
    while(s<=e){
        int t=a[s];
        a[s]=a[e];
        a[e]=t;
        s++;
        e--;
    }
     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   
   
}