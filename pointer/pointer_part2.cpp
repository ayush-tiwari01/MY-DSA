#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,4,0};
    // cout<<"Address of first location of array "<<arr<<endl;
    // cout<<"printing the value of first index of the array "<<arr[0]<<endl;
    // cout<<"printing the value of first index of the array "<<&arr[0]<<endl;
    // cout<<"print the first location of array "<<*arr<<endl;
    // cout<<"print the first location of array "<<*(arr+1)<<endl;
    // cout<<"print the first location of array "<<*(arr+2)<<endl;
    

    //undar ki baat in the array arr[i] = *(arr+i)
    //ik important baat battau i[arr]=*(i+arr) uppar vala or neeche vala formula same hi bhai
    // int i=3;
    // int *p=&arr[0];
    // cout<< i[arr]<<endl;
    // cout<< "size of array "<<sizeof(arr)<<endl;
    // cout<<sizeof(*arr)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;

//All are the same thing
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;

    int *p=&arr[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    //ponter with char array 
    char ch[6] = "abcde";
    //******attention here**********
    cout<< ch <<endl;
    //*******be attentive at this point***********
    char *cha = &ch[0];
    cout<< cha<<endl;

    char temp='z';
    char *p1=&temp;
    cout<<p1<<endl;



}