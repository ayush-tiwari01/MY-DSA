#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int s)
    {
        this->size = s;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void enqueue(int element)
    {
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        } 
    }
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    queue q1(5);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    int y= q1.dequeue();
    cout<<"Deleted element is:-  "<<y<<endl;
    // q1.dequeue();
    // q1.dequeue();
    cout<<q1.qfront();
    cout<<endl;
     if (q1.isempty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
   
}