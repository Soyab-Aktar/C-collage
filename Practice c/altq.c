#include <stdio.h>
#include <stdlib.h> 


int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int start_range, end_range;

    
    printf("Enter the start of the range: ");
    scanf("%d", &start_range);
    printf("Enter the end of the range: ");
    scanf("%d", &end_range);

    if (start_range >= end_range) {
        printf("Invalid range. Start value must be less than end value.\n");
        return 1;
    }

    
    int max_primes = end_range - start_range + 1;
    int *prime_numbers = (int *)malloc(max_primes * sizeof(int));

    if (!prime_numbers) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int count = 0; 

    for (int num = start_range; num <= end_range; ++num) {
        if (isPrime(num)) {
            prime_numbers[count] = num;
            count++;
        }
    }

    printf("Prime numbers between %d and %d:\n", start_range, end_range);
    for (int i = 0; i < count; ++i) {
        printf("%d ", prime_numbers[i]);
    }
    printf("\n");

   
    free(prime_numbers);

    return 0;
}