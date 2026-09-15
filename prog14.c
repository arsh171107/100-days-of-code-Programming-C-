#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum[rows];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}