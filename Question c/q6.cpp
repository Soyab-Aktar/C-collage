#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int originalnum, reminder, result;
    cout << "Enter your first range : ";
    cin >> num1;
    cout << "Enter your Second range : ";
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {

        originalnum = i;
        result = 0;

        while (originalnum != 0)
        {
            reminder = originalnum % 10;
            result += reminder * reminder * reminder;
            originalnum /= 10;
        }
        if (result == i)
        {
            cout << i << endl;
        }
    }
}