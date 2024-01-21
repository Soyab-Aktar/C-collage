#include <iostream>
using namespace std;
int main()
{
    float n;
    cin >> n;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * i);
    }
    cout << sum;

    return 0;
}
