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
int findsame(string name, int sizestr)
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

    return result;
}
int main()
{
    string name = "moaom";
    cout << "Hello" << endl;
    int sizestr = findsize(name);
    int check = findsame(name, sizestr);
    if (check == 1)
    {
        cout << "It is a Palindrom string .";
    }
    else
    {
        cout << "Not a palindrom string.";
    }
}