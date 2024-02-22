#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int *num = (int*)malloc(sizeof(int)); // Dynamically allocate memory for the number
    if (num == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a number: ");
    scanf("%d", num);

    if (isPrime(*num)) {
        printf("%d is a prime number.\n", *num);
    } else {
        printf("%d is not a prime number.\n", *num);
    }

    free(num); // Free dynamically allocated memory
    return 0;
}
