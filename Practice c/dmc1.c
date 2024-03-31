#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("add in %d number is : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
}