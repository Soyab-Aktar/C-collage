#include <iostream>
using namespace std;
void find(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target;
    cout << "Enter target to delete this element form array :";
    cin >> target;

    find(arr, size, target);

    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}