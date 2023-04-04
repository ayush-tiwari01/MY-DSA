#include<iostream>
using namespace std;
class stack{
    public:
   int top;
   int size;
   int *arr;
   stack(int size){
    this->size=size;
    arr = new int[size];
    top=-1;
   }
   void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
        cout<<arr[top]<<endl;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
   }
   void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack under flow"<<endl;
    }
   }
   int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
   }
   bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
   }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"Peek element is in the stack:-  "<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty";
    }

}