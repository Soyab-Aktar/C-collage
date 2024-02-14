#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int row1, row2, col1, col2;

    // input form user for row and col for 'a' :
    printf("Enter your row for 'a' matrix = ");
    scanf("%d", &row1);
    printf("Enter your col for 'a' matrix = ");
    scanf("%d", &col1);

    // input form user for row and col for 'b' :
    printf("Enter your row for 'b' matrix = ");
    scanf("%d", &row2);
    printf("Enter your col for 'b' matrix = ");
    scanf("%d", &col2);

    // Condition if not applicable :
    if (col1 != row2) {
        printf("Multiplication of matrix is not possible\n");
        return 0;
    }

    // input of 'a' matrix :
    for (int row = 0; row < row1; row++) {
        for (int col = 0; col < col1; col++) {
            printf(" [ %d  ] [ %d  ] = ", row, col);
            scanf("%d", &a[row][col]);
        }
    }

    printf("\n\n");

    // input of 'b' matrix :
    for (int row = 0; row < row2; row++) {
        for (int col = 0; col < col2; col++) {
            printf(" [ %d  ] [ %d  ] = ", row, col);
            scanf("%d", &b[row][col]);
        }
    }

    // Matrix multiplication
    for (int row = 0; row < row1; row++) {
        for (int col = 0; col < col2; col++) {
            c[row][col] = 0;
            for (int other = 0; other < col1; other++) {
                c[row][col] += a[row][other] * b[other][col];
            }
        }
    }

    // Output of Matrix multiplication :
    for (int row = 0; row < row1; row++) {
        for (int col = 0; col < col2; col++) {
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}
