// write a function that checks whether a given sting is palindrome or not.
//  use this function to find whether the string entered palindrom or not.
#include <stdio.h>
int charlenx(const char *name)
{
    int count = 0;
    int i = 1;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}
int checkchar(const char *name, int charlen)
{
    int left = 0;
    int right = charlen - 1;
    while (left < right)
    {
        if (name[left] != name[right])
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}
int main()
{
    char name[100];
    printf("Enter a string : ");
    fgets(name, sizeof(name), stdin);

    int charlen = charlenx(name);
    int finalans = checkchar(name, charlen);

    if (finalans == 1)
    {
        printf("It is a palindrome string.");
    }
    else
    {
        printf("It is not a palindrome string.");
    }

    return 0;
}