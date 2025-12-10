#include <stdio.h>
int main()
{
    int number,pro;
    printf("input negative integer number");
    printf("\n");
    pro=scanf("%d",&number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);// строчка для очистки буфера(программа выполняется в отдельном окне и после ввода значений закрывается, поэтому этой строчкой "удерживаю окно открытым")
    if (pro!=1)//проверка на ввод числа, а не символа 
    {
        printf("inputed char,not  a nubmer, please input a number");
        printf("\nprint Enter for exit");
        getchar();
        return 1;
    }
    if (number>0) //проверка на ввод отрицательного числа
    {
    printf("incorrect input, number must be negative!");
    printf("\nprint Enter for exit");
    getchar();
    return 1;
    }
    for (int i = 31; i >= 0; i--) //циклом проходим побитово введенное значение типа int(поэтому от 31 до 0)
    {
        printf("%d", (number >> i) & 1);
    }
    printf("\nprint Enter for exit");
    getchar();
    return 0;
}
