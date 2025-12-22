#include <stdio.h>

int main() {
    int n;
    printf("Введите N: ");
    scanf("%d", &n);

    int a[n][n];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int val = 1;

    while (top <= bottom && left <= right) {
        // слева направо
        for (int j = left; j <= right; j++)
            a[top][j] = val++;
        top++;

        // сверху вниз
        for (int i = top; i <= bottom; i++)
            a[i][right] = val++;
        right--;

        // справа налево
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                a[bottom][j] = val++;
            bottom--;
        }

        // снизу вверх
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                a[i][left] = val++;
            left++;
        }
    }

    // вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }

    return 0;
}