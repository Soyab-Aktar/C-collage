#include <iostream>
using namespace std;
int main()

{
    int num;
    int fibo, first = 0, second = 1, count = 0;

    cout << "Enter your range : ";
    cin >> num;

    while (count < num)
    {

        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        cout << fibo << " ";
        count++;
    }
}