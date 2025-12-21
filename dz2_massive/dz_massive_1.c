#include <stdio.h>

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    
    int num = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    // Пауза чтобы окно не закрывалось
    printf("\nНажмите Enter для выхода...");
    getchar();  // очистка буфера от \n после scanf
    getchar();  // ожидание Enter
    
    return 0;
}