#include<iostream>
using namespace std;
void update(int **p1){
    // p1 = p1 +1;
    //kucch change hoga -->No
    //  *p1 = *p1+1;
    //kucch change hoga -->yes
    **p1 = **p1+1;
    //kucch chage hoga -->yes

}
int main(){
    // int n=5;
    // int *ptr=&n;
    // int **p1=&ptr;
    //  cout<<n<<endl;
    // cout<<&n<<endl;
    // cout<<ptr<<endl;
    // cout<<*p1<<endl;
    // update(p1);
    // cout<<n<<endl;

    // cout<<&ptr<<endl;
    // cout<<p1<<endl;
    int n1 = 1;
    int n2 = 2;
    int *ptr = &n2;
    *ptr=9;
    cout<<n1<<" "<<n2<<endl;
}