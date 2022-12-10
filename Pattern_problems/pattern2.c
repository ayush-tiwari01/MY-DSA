#include<stdio.h>
int main(){
    int n;
    char ch ='A';
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("%c ",ch);
            ch++;
        }
            printf("\n");
    }
}