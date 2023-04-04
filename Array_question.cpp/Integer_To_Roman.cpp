#include <iostream>
using namespace std;
int main()
{
    string ans;
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    string roman[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i = 0;
    while (num != 0)
    {
        while (num >= value[i])
        {
            num = num - value[i];
            ans = ans + roman[i];
        }
        i++;
    }
    cout << "Roman number is : " << ans << endl;
    cout << endl;
    cout << "Bhai.. maan meri baat.. tu seekh gaya coding!!" << endl;
    cout << endl;
}