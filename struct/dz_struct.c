#include <stdio.h>
#include <string.h>

struct abonent { //n-name, s-second name, t-telephone
    char n[10], s[10], t[10];
} dir[100];

int main() {
    int c = 0, choice;
    
    while(1) {
        printf("\n1-Добавить 2-Удалить 3-Найти 4-Показать 5-Выход\n> ");
        scanf("%d", &choice);
        
        if(choice == 1) { // Добавиим имя фамилия телефон
            if(c >= 100) printf("Нет места!\n");
            else {
                printf("Имя Фамилия Телефон: ");
                scanf("%s%s%s", dir[c].n, dir[c].s, dir[c].t);
                c++;
            }
        }
        else if(choice == 2) { // Удалить
            int d;
            for(int i=0; i<c; i++)
                printf("%d.%s %s\n", i+1, dir[i].n, dir[i].s);
            printf("Удалить номер: ");
            scanf("%d", &d);
            if(d>0 && d<=c) {
                for(int i=d-1; i<c-1; i++) dir[i] = dir[i+1];
                c--;
            }
        }
        else if(choice == 3) { // Найти
            char name[10];
            printf("Имя для поиска: ");
            scanf("%s", name);
            for(int i=0; i<c; i++)
                if(strcmp(dir[i].n, name) == 0)
                    printf("%s %s - %s\n", dir[i].n, dir[i].s, dir[i].t);
        }
        else if(choice == 4) { // Показать всех
            for(int i=0; i<c; i++)
                printf("%d.%s %s - %s\n", i+1, dir[i].n, dir[i].s, dir[i].t);
        }
        else if(choice == 5) break; // Выход
    }
    
    return 0;
}