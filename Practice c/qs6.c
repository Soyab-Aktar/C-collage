// Prime number or not

#include <stdio.h>
void isprime(int num)
{
    int ans = 0;

    if (num <= 1)
    {
        ans = 1;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            ans = 1;
            break;
        }
    }

    if (ans == 0)
    {
        printf("It is a prime number .");
    }
    else
    {
        printf("Its not a prime number .");
    }
}
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    isprime(num);
}