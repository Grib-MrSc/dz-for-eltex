#include <stdio.h>

int main() {
    char s[100];   // строка
    char f[50];    // что ищем
    char *result = NULL;  // результат
    
    printf("input string: ");
    scanf("%s", s);
    
    printf("input substring: ");
    scanf("%s", f);
    
    for (int i = 0; s[i]; i++) {
        int ok = 1;  // предполагаем, что нашли
        
        
        for (int j = 0; f[j]; j++) { // Проверяем, совпадает ли с этой позиции
            if (s[i + j] != f[j]) {
                ok = 0;  // не совпало
                break;
            }
        }
        
        if (ok) { // Если все символы совпали
            result = &s[i];
            break;
        }
    }
    
    if (result) {
        printf("Found, adress: %p\n", result);
    } else {
        printf("not found\n");
    }
    
    return 0;
}