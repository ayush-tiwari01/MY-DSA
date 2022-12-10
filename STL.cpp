#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    //  vector<int> v;
    //  vector<int> a(5,1);
    //  cout<<"print elements"<<endl;
    //  for(int i:a){
    //     cout<<i<<" ";
    //  }cout<<endl;
    //  cout<<"size is "<<v.capacity()<<endl;
    //  v.push_back(1);
    //  cout<<"size is "<<v.capacity()<<endl;
    //  v.push_back(2);
    //  cout<<"size is "<<v.capacity()<<endl;
    //  v.push_back(3);
    //  cout<<"size is "<<v.capacity()<<endl;
    //  cout<<"size  "<<v.size()<<endl;
    //  cout<<"front element "<<v.front()<<endl;
    //  cout<<"last element "<<v.back()<<endl;
    //  cout<<"before pop"<<endl;
    //  for(int i:v){
    //     cout<<i<<" ";
    //  }cout<<endl;
    //  v.pop_back();
    //  cout<<"After pop"<<endl;
    //  for(int i:v){
    //     cout<<i<<" ";
    //  }cout<<endl;
    //  v.clear();
    //  cout<<"size is "<<v.capacity()<<endl;
    //   cout<<"size  "<<v.size()<<endl;
    //   // deque
    //   deque<int> d;
    //   d.push_back(1);
    //   d.push_front(2);
    //   cout<<"front "<<d.front()<<endl;
    //   cout<<"last "<<d.back()<<endl;

    //   //stack
    //   stack<string> g;
    //    g.push("ayush");
    //    g.push("tiwari");
    //    cout<<"top element "<<g.top()<<endl;
    //    cout<<"size is "<<g.size()<<endl;

    //    //queue
    //    //max-heap
    //    priority_queue<int> maxi;
    //    //min-heap
    //    priority_queue<int,vector<int>,greater<int>>mini;
    //    maxi.push(4);
    //    maxi.push(3);
    //    maxi.push(2);
    //    maxi.push(1);
    //    maxi.push(0);
    //    int n=maxi.size();
    //    for(int i=0;i<n;i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    //    }cout<<endl;
    //    mini.push(4);
    //    mini.push(3);
    //    mini.push(2);
    //    mini.push(1);
    //    mini.push(0);
    //      for(int i=0;i<n;i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    //    }cout<<endl;
    vector<int> s;
    s.push_back(1);
    s.push_back(15);
    s.push_back(10);
    s.push_back(4);
    cout << "search for " << binary_search(s.begin(), s.end(), 3)<<endl;
    int a=5;
    int b=15;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string str="lovebabbar";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    sort(s.begin(),s.end());
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;
}