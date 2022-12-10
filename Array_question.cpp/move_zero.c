//move zero to the end non zero at the first without changing the order
#include<stdio.h>
int main(){
    
    int n=7;
    int a[]={0,1,0,3,0,0,12};
    //logic
    int nonzero=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            int t=a[j];
            a[j]=a[nonzero];
            a[nonzero]=t;
            nonzero++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}