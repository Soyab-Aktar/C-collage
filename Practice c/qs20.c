#include <stdio.h>
int findgcd(int n1, int n2)
{
    int temp;
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    return n1;
}
int findlcm(int n1, int n2)
{
    return (n1 / findgcd(n1, n2)) * n2;
}
int main()
{
    int n1, n2, n3;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    printf("Enter third number : ");
    scanf("%d", &n3);

    int onegcd = findgcd(n1, n2);
    int lastgcd = findgcd(n3, onegcd);
    printf("%d ", lastgcd);

    int onelcm = findlcm(n1, n2);
    int lastlcm = findlcm(n3, onelcm);
    printf("\n%d ", lastlcm);
}