#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 5, 6, 1, 3, 9, 7, 8, 4};
    int size = 9;
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}