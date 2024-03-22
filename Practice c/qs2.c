// wap to reverse a number
#include <stdio.h>
int main()
{
    int num, rem;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        printf("%d", rem);
        num /= 10;
    }
}