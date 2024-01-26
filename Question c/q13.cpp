#include <iostream>
using namespace std;
int findsize(string name)
{
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    return count;
}
void findsame(string name, int sizestr)
{
    int left = 0;
    int right = sizestr - 1;
    int result = 1;
    while (left < right)
    {
        if (name[left] != name[right])
        {
            result = 0;
            break;
        }
        left++;
        right--;
    }

    if (result == 1)
    {
        cout << "It is a Palindrom string .";
    }
    else
    {
        cout << "Not a palindrom string.";
    }
}
int main()
{
    string name = "moom";

    int sizestr = findsize(name);
    // int check = findsame(name, sizestr);
    findsame(name, sizestr);
    // if (check == 1)
    // {
    //     cout << "It is a Palindrom string .";
    // }
    // else
    // {
    //     cout << "Not a palindrom string.";
    // }
}