#include <stdio.h>
#include <string.h>

struct abonent {
    char n[10], s[10], p[10];
} dir[100];

int count = 0;

void menu();
void add();
void del();
void find();
void show();

int main() {
    int choice;
    
    while(1) {
        menu();
        scanf("%d", &choice);
        
        if(choice == 1) add();
        else if(choice == 2) del();
        else if(choice == 3) find();
        else if(choice == 4) show();
        else if(choice == 5) break;
    }
    
    return 0;
}

void menu() {
    printf("\n1-Добавить 2-Удалить 3-Найти 4-Показать 5-Выход\n> ");
}

void add() {
    if(count >= 100) {
        printf("Нет места!\n");
        return;
    }
    
    printf("Имя Фамилия Телефон: ");
    scanf("%s %s %s", dir[count].n, dir[count].s, dir[count].p);
    count++;
}

void del() {
    int num;
    
    for(int i = 0; i < count; i++)
        printf("%d. %s %s\n", i+1, dir[i].n, dir[i].s);
    
    printf("Удалить номер: ");
    scanf("%d", &num);
    
    if(num > 0 && num <= count) {
        for(int i = num-1; i < count-1; i++)
            dir[i] = dir[i+1];
        count--;
    }
}

void find() {
    char name[10];
    
    printf("Имя для поиска: ");
    scanf("%s", name);
    
    for(int i = 0; i < count; i++)
        if(strcmp(dir[i].n, name) == 0)
            printf("%s %s - %s\n", dir[i].n, dir[i].s, dir[i].p);
}

void show() {
    for(int i = 0; i < count; i++)
        printf("%d. %s %s - %s\n", i+1, dir[i].n, dir[i].s, dir[i].p);
}