#include<stdio.h>
int main(){
    int n,c,r,s=0;
    printf("enter the number");
    scanf("%d",&n);
    c=n;
    while(n>0){
    r=n%10;
    s=(10*s)+r;
    n=n/10;
    }
    if(c==s){
        printf("this is a palindrome number\n");
    }
    else{
        printf("this is not a palindrome number\n");
    }
    printf(" The reverse number is %d",s);

}