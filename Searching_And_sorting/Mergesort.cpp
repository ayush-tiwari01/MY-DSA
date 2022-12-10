#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(int *arr, int s, int mid, int e)
{

    int i = s;
    int j = mid + 1;
    int k = s;
    int b[100];
    while (i <= mid && j <= e)
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            j++;
            k++;
        }
        else
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for (int i = s; i <= e; i++)
    {
        arr[i]=b[i];
    }
}
void mergesort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s >= e)
    {
        return;

    }
    //right vala part sort kar diya
     mergesort(arr, 0, mid);
     //left vala part sort kar diya
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}
int main()
{
    int arr[14] = {77,15,17,0,155,199,250,850,16,300, 1, 2, 10, 3};
    int n = 14;
    printarray(arr, 14);
    mergesort(arr, 0, 14);
    cout << endl;
    cout << "Bhai array sorted kar di hi " << endl;
    printarray(arr, 14);
}