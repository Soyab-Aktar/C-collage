#include <iostream>
using namespace std;
void swapping(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter your number a : ";
    cin >> a;
    cout << "Enter your number b : ";
    cin >> b;

    cout << "Before swap : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapping(&a, &b);

    cout << "After swap : " << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}