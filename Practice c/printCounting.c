#include <stdio.h>
void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    printf(" %d", n);
    counting(n - 1);
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    counting(n);
    // printf("Factorial is : %d", finalans);
}