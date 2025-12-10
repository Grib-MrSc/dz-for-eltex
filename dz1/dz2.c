#include <stdio.h>
int main()
{
    int number,pro;
    printf("input positive integer number");
    printf("\n");
    pro=scanf("%d",&number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF); //очистка буфера
    if (pro!=1){
        printf("inputed char,not  a nubmer, please input a number");
        printf("\nprint Enter for exit");
        getchar();
        return 1;
    }
    if (number<0) //проверка на ввода положительного числа
    {
    printf("incorrect input, number must be positive!");
    printf("\nprint Enter for exit");
    getchar();
    return 1;
    }
    for (int i = 31; i >= 0; i--) 
    {
        printf("%d", (number >> i) & 1);
    }
    printf("\nprint Enter for exit");
    getchar();
    return 0;
}
