#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>q;
    q.push_front(1);
    q.push_back(2);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_back();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop_back();


}