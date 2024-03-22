// S= 1+1/2+1/3+1/4....
#include <stdio.h>

int main() {
    int range;
    float sum = 0; // Use float for sum to retain fractional parts
    printf("Enter your range: ");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) { // Start loop from 1 and include range
        sum = sum + 1.0 / i; // Use 1.0 for floating-point division
    }

    printf("Sum of the series is: %.2f\n", sum); // Print sum with two decimal places
    return 0;
}
