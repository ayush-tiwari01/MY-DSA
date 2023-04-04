#include<iostream>
using namespace std;
class CircularQueue{
       public:
    int *arr;
    int front;
    int size;
    int rear;
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr= new int[size];
        front=rear=-1;
    }
        bool enqueue(int value){
        //check queue is full 
       if( (front==0 && rear==size-1) || (rear==(front-1)%(size-1) )  )
       {
           return false;
       }
        //single element push
        else if(front==-1){
          front=rear=0;
        }
        //maintain cyclic nature
        else if(front!=0 && rear==size-1){
         rear=0;
        }
        //normal flow
        else{
           rear++;
        }
        arr[rear]=value;
        return true;
    }
    int dequeue(){
        if(front==-1){
           return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
         if(front==rear){
         front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }

};
int main(){
    CircularQueue c1(5);
    if(c1.enqueue(1)){
        cout<<" circular queue is empty"<<endl;
    }
    else{
        cout<<"circular queue is not empty"<<endl;
    }
    c1.enqueue(2);
    c1.enqueue(3);
    cout<<c1.dequeue();
    cout<<endl;
    cout<<c1.dequeue();

}