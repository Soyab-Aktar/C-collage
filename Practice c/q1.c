#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    if (num % 2 == 0 && num > 2) return 0; // Check for even numbers greater than 2
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count = 0;
    int num = 2; // The first prime number

    printf("First 50 Prime Numbers:\n");
    while (count < 50) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
