#include <stdio.h>
void fibb(int n)
{
    int first = 0;
    int second = 1;
    int nextTerm;

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            nextTerm = i;
        }
        else
        {
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        printf("%d ", nextTerm);
    }
}
int fibbrec(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }

    return fibbrec(n-1)+fibbrec(n-2);
    
}
int main()
{
    int n;
    printf("Enter term of fibbonacci series : ");
    scanf("%d", &n);

    fibb(n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", fibbrec(i));
    }
}