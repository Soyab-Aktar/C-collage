#include <stdio.h>

int main()
{
    int n, term = 2, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is: ");
    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("+");
            }
        }
        printf("%d", term);
        term += 2;
    }
    printf("\n");

    term = 2; // Reset term for calculating sum
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= term;
        }
        else
        {
            sum += term;
        }
        term += 2;
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
