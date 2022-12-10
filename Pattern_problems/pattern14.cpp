#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=0;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
            a=j;
        }
        b++;
        if(b!=1)
        {
        for(int j=1;j<2*b-2;j++)
        {
            cout<<"*";
        }
        }
        if(a==n)
        {for(int j=a-1;j>=1;j--)
        {
            cout<<j;
        }
            cout<<endl;
            continue;
        }
        for(int j=a;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}