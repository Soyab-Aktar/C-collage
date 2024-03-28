// weite a macro that swaps two numbers
#include <stdio.h>
#define letsswap(a, b) \
    {                  \
        int temp;      \
        temp = a;      \
        a = b;         \
        b = temp;      \
    }
int main()
{
    int a = 5;
    int b = 89;
    printf("Before swap :\n");
    printf("a = :%d\n", a);
    printf("b = :%d\n", b);

    letsswap(a, b);

    printf("Before swap :\n");
    printf("a = :%d\n", a);
    printf("b = :%d\n", b);

    return 0;
}
