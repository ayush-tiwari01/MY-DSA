#include<iostream>
using namespace std;
// printing the number

int printing(int n){
    if(n==0){
    return 1;
    }
    printing(n-1);
    cout << n <<endl;
    
}
// to find the power 
int power(int a, int b){
    if(b==0){
        return 1;
    }
    int ans = a*power(a,b-1);
    return ans;

}
// to find the factorial number
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact = n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    cout << "enter the number" << endl;
    cin>>n;
// //    int y= factorial(n);
// //    cout << y <<endl;
//    int a,b;
//    cin>>a>>b;
//    int ans=power(a,b);
//    cout<<ans<<endl;
printing(n);

}