#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *ptr = numbers; 
 
    printf("massive elments:\n");

    for(int i = 0; i < 10; i++) { //цикл на проход по всем элементам массива
        printf("%d ", *ptr); // Выводим значение, на которое указывает pt
        ptr++;
    }
    
    printf("\n");
    return 0;
}