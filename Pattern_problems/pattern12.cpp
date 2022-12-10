// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << (i+j-1) << " ";
//         }
//         cout << endl;
//     }
// }
//second method is
#include <iostream>
using namespace std;
int main()
{
    int n,cnt;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cnt=i;
        for (int j = 1; j <= n; j++)
        {
            cout <<cnt << " ";
            cnt++;
        }
        
        cout << endl;
    }
}