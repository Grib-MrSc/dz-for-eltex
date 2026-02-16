#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct abonent {
    char n[10]; // имя
    char s[10]; // фамилия
    char t[10]; // телефон
    struct abonent *prev;
    struct abonent *next;
};

struct abonent *head = NULL; // начало списка
int count = 0; // счетчик абонентов

int main() {
    int choice;
    
    while(1) {
        printf("\n1-Добавить 2-Удалить 3-Найти 4-Показать 5-Выход\n> ");
        scanf("%d", &choice);
        
        if(choice == 1) { // Добавить
            struct abonent *new = (struct abonent*)malloc(sizeof(struct abonent));
            if(new == NULL) {
                printf("Ошибка памяти!\n");
                continue;
            }
            
            printf("Имя Фамилия Телефон: ");
            scanf("%s%s%s", new->n, new->s, new->t);
            new->prev = NULL;
            new->next = NULL;
            
            if(head == NULL) { // первый абонент
                head = new;
            } else { // ищем конец списка
                struct abonent *temp = head;
                while(temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = new;
                new->prev = temp;
            }
            count++;
            printf("Добавлено!\n");
        }
        else if(choice == 2) { // Удалить
            if(head == NULL) {
                printf("Список пуст!\n");
                continue;
            }
            
            // показываем всех
            struct abonent *temp = head;
            int i = 1;
            while(temp != NULL) {
                printf("%d.%s %s\n", i, temp->n, temp->s);
                temp = temp->next;
                i++;
            }
            
            int d;
            printf("Удалить номер: ");
            scanf("%d", &d);
            
            if(d < 1 || d > count) {
                printf("Неверный номер!\n");
                continue;
            }
            
            // находим нужный элемент
            temp = head;
            for(i = 1; i < d; i++) {
                temp = temp->next;
            }
            
            // перевязываем список
            if(temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                head = temp->next; // удаляем первый
            }
            
            if(temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            
            free(temp);
            count--;
            printf("Удалено!\n");
        }
        else if(choice == 3) { // Найти
            if(head == NULL) {
                printf("Список пуст!\n");
                continue;
            }
            
            char name[10];
            printf("Имя для поиска: ");
            scanf("%s", name);
            
            struct abonent *temp = head;
            int found = 0;
            while(temp != NULL) {
                if(strcmp(temp->n, name) == 0) {
                    printf("%s %s - %s\n", temp->n, temp->s, temp->t);
                    found = 1;
                }
                temp = temp->next;
            }
            if(!found) printf("Не найдено\n");
        }
        else if(choice == 4) { // Показать всех
            if(head == NULL) {
                printf("Список пуст!\n");
                continue;
            }
            
            struct abonent *temp = head;
            int i = 1;
            while(temp != NULL) {
                printf("%d.%s %s - %s\n", i, temp->n, temp->s, temp->t);
                temp = temp->next;
                i++;
            }
        }
        else if(choice == 5) { // Выход
            // освобождаем память
            struct abonent *temp = head;
            while(temp != NULL) {
                struct abonent *next = temp->next;
                free(temp);
                temp = next;
            }
            printf("До свидания!\n");
            break;
        }
    }
    
    return 0;
}