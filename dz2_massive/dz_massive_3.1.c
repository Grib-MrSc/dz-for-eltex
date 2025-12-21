#include <stdio.h>

int main() {
    int n, i, j;

    printf("Введите размер матрицы N: ");
    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j >= n - 1)   // ПРАВЫЙ нижний треугольник
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}