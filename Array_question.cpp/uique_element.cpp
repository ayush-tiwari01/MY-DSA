#include <iostream>
using namespace std;
int uniqueelement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        
        ans = ans ^ arr[i];
        cout<<ans<<endl;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size" << endl;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = uniqueelement(arr, n);
    cout << "unique element is " << s;
}