#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    float sum = 0;
  int p;


    for (int i = 1; i <= n; i++)
    {
      if(i==1)
      {
        printf("1+");
      }
      else
      {
        p=i*i;
      printf("1/%d+",p);
      }
        sum += 1.0 / (i * i);
    }

  printf("\b = %f",sum);
    return 0;
}