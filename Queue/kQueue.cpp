#include <iostream>
using namespace std;
class kQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot = 0;
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        arr = new int[n];
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freespot = 0;
    }
    void enqueue(int data, int qn)
    {
        if (freespot == -1)
        {
            cout << "no empty space is present" << endl;
            return;
        }
        // first first free index
        int index = freespot;
        // update freespot
        freespot = next[index];
        // check whther first element

        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            next[rear[qn - 1]] = index;
        }
        // update next
        next[index] = -1;
        //update rear
        rear[qn-1]= index;
        // push element
        arr[index] = data;
    }
    int dequeue(int qn)
    {
        if (front[qn - 1] == -1)
        {
            cout << "queue underflow" << endl;
            return 0;
        }
        // find index to pop
        int index = front[qn - 1];
        // front  ko aage badhao
        front[qn - 1] = next[index];
        // freeslots ko manage karo
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
int main()
{
    kQueue q(10, 3);

    q.enqueue(10, 1);
    q.enqueue(20, 1);
    q.enqueue(30, 2);
    q.enqueue(40, 1);
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
}