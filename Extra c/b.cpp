#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0, remainder, original;
    // printf("Enter an integer: ");
    // scanf("%d", &n);
    cout << "Enter an integers : ";
    cin >> n;
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}