#include <stdio.h>

int main() {
    unsigned int num;
    unsigned char new_value;
    int c;
    
    printf("input number: ");
    scanf("%u", &num);
    
    while ((c = getchar()) != '\n' && c != EOF);//очистка буфера для удержания командной строки(отдельное окно)
    
    printf("input new value of 3 byte: ");
    scanf("%hhu", &new_value);
    
    num = (num & 0xFF00FFFF) | (new_value << 16);//очищаем 2 байта(с 16 по 31 бит числа num)
    printf("result: %u\n", num);
    
    printf("Press Enter to exit...");
    getchar(); 
    
    return 0;
}
