#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
          printf("*");

        }
        printf("\n");
    }
}