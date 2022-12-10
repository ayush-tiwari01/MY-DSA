#include<iostream>
using namespace std;
int main(){
    // it is not good pratice to initilise the pointer
    int *ptr;
    cout<<ptr<<endl;

    //***********this si the most important concept in the pointer*********************


    int i = 5;
    int a=i;
    cout<<"before"<<endl;
    cout<<a<<endl;
    a++;
    cout<<"after"<<endl;
    cout<<i<<endl;

    int *p1;
    p1=&i;
    cout<<"before"<<endl;
    cout<<*p1<<endl;
    p1=p1+1;

    // ***********important point***************
    cout<<p1<<endl;
    (*p1)++;
    cout<<"after"<<endl;
    cout<<*p1<<endl;

    //***********copy a pointer **************
    // int *q = p1;
    // cout<<q<<"  - "<<p1<<endl;
    // cout<<*q<<"--"<<*p1<<endl;
    // cout<<&i<<endl;
    cout<<"hi bhai"<<endl;
    int **q= &p1;
    cout<<p1<<endl;
    cout<<*q<<endl;
     cout<<**q<<endl;
    cout<<"pahuch gaye bhai"<<endl;
    cout<<*p1<<endl;


    //******* Lets Play with the pointer**********
    // cout<<p1<<endl;
    // cout<<*p1<<endl;
    // int n=5;
    // double d=4.2;
    // double *p2=&d;
    // cout<<"number is : "<<n<<endl;
    // cout<<"Address of number is : "<<&n<<endl;;
    // int *ptr = &n;
    // cout<<"Address of number is : "<<ptr<<endl;
    // cout<<" number is : "<<*ptr<<endl;
    // cout<<"size of the integer : "<<sizeof(n)<<endl;
    // cout<<"size of the pointer : "<<sizeof(ptr)<<endl;
    // cout<<"size of the double : "<<sizeof(d)<<endl;
    // cout<<"size of the pointer : "<<sizeof(p2)<<endl;
    
}