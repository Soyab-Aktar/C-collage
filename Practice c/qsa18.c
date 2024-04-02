// #include <stdio.h>
// void fac(int n)
// {
//     int product = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         product *= i;
//     }

//     printf("Factorial of a the number is : %d", product);
// }
// int main()
// {
//     int n;
//     printf("Enter your number : ");
//     scanf("%d", &n);

//     fac(n);
// }

#include <stdio.h>
int fac(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 1;
    }

    int final = fac(n - 1);

    return n * final;
}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);

    int finalfac = fac(n);
    printf("Factorial is : %d", finalfac);
}