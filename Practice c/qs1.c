// wap to print the sum and product of digit of an integer
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your digit : ");
    scanf("%d", &num);
    int newnum=num;
    int m, sum = 0,mul=1;

    while (num != 0)    
    {
        m = num % 10;
        sum += m;
        num /= 10;
    }

    printf("Sum of digit is : %d\n", sum);

    while (newnum != 0)
    {
        m = newnum % 10;
        mul *= m;
        newnum /= 10;
    }

    printf("Product of digit is : %d", mul);
}