#include<iostream>
#include<queue>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    
};
void heapify(int arr[], int n, int i){
     int largest=i;
     int left=2*i;
     int right=2*i+1;
     if(left<=n && arr[largest] <arr[left]){
        largest=left;
     }
     if(right<=n && arr[largest] <arr[right]){
        largest=right;
     }
     if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);

     }
}
void heapsort(int arr[], int n){
    int size=n;
    while(size>1){
        //step:1 swap
        swap(arr[size],arr[1]);
        //step2 
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    heap h;
    //heap creation 
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"printing the row "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
      //heapsort
      heapsort(arr,n);
    cout<<"printing the row "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    priority_queue<int>pq;
    pq.push(4);
    pq.push(2);
     pq.push(5);
      pq.push(3);
      cout<<"element at top "<<pq.top()<<endl;
      pq.pop();
      cout<<"element at top"<<pq.top()<<endl;
      cout<<"size is "<<pq.size()<<endl;
      if(pq.empty()){
        cout<<"pq is empty"<<endl;
      }
      else{
        cout<<"pq is not empty"<<endl;
      }
      //min heap 
      priority_queue<int, vector<int>, greater<int> >minheap;
      minheap.push(4);
      minheap.push(2);
      minheap.push(5);
      minheap.push(3);
      cout<<"element at top "<<minheap.top()<<endl;
      minheap.pop();
      cout<<"element at top"<<minheap.top()<<endl;
      cout<<"size is "<<minheap.size()<<endl;
      if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
      }
      else{
        cout<<"minheap is not empty"<<endl;
      }
}