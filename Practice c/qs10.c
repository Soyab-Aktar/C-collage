#include <stdio.h>
#include <limits.h>
void printeven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}
void printodd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}
void printsumavg(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum / size;
    printf("Sum of element is : %d\n", sum);
    printf("avg of element is : %.2f\n", avg);
}
void printmaxmin(int arr[], int size)
{
    int maxnum = INT_MIN;
    int minnum = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minnum)
        {
            minnum = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxnum)
        {
            maxnum = arr[i];
        }
    }

    printf("Maximum number from array is : %d\n", maxnum);
    printf("Minimum number from array is : %d\n", minnum);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    printf("Print even numbers from array : \n");
    printeven(arr, size);

    printf("Print odd numbers from array : \n");
    printodd(arr, size);

    printf("Print sum and avg from array : \n");
    printsumavg(arr, size);

    printf("Print maximum and minimum element from array : \n");
    printmaxmin(arr, size);
}