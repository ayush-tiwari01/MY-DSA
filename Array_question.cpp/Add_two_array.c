#include<stdio.h>
int main(){
     int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m;
    printf("enter size");
    scanf("%d",&m);
    printf("enter second array");
    int b[m];
    
     for(int j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    int c[50];
    int k=0;
    int p=m+n;
    //logic
    int i=n-1;
    int j=m-1;
    int carry=0;
    int sum=0;
    while(i>=0&&j>=0){
        int n1=a[i];
        int n2=b[j];
        int sum=n1+n2+carry;
        
        carry=sum/10;
        sum=sum%10;
        i--;
        j--;
        c[k]=sum;
        k++;

    }
    while(i>=0){
        sum=a[i]+carry;
         carry=sum/10;
        sum=sum%10;
        
        c[k]=sum;
        k++;
        i--;
    }
     while(j>=0){
        sum=a[j]+carry;
         carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        k++;
        j--;
    }
     while(carry!=0){
        sum=carry;
         carry=sum/10;
        sum=sum%10;
        c[k]=sum;
        k++;
    }
    // for(int i=0;i<p;i++){
    //     printf("%d",c[i]);
    // }
    for(int i=0;i<n/2;i++){
        int num1=c[i];
        int num2 = c[n-i-1];
        c[i]=num2;
        c[n-i-1]=num1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}