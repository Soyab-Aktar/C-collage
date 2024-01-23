#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int index = 0;
    int n;
    cin >> n;

    for (int i = 2; i <= n * 2; i += 2)
    {
        if (index % 2 == 0)
        {
            result += i;
            cout << "$ ";
        }
        else
        {
            result -= i;
            cout << "$ ";
        }

        index++;
    }

    cout << "Result: " << result << std::endl;

    return 0;
}
