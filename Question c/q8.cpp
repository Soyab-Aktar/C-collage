#include <iostream>
using namespace std;
int main()
{
    int n; // Number of rows in the pattern
    cout << "Enter your number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        int value = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
