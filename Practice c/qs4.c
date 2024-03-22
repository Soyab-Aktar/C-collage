// S = 1-2+3-4+5-6....
#include <stdio.h>
int main()
{
    int range, sum = 0;
    printf("Enter your range : ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        if (i % 2 == 0)
        { // Check if i is even
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    printf("Sum of the series is : %d", sum);
}