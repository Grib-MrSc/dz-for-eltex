#include <stdio.h>
int main()
{
    int number,pro,count=0;
    printf("input positive integer number");
    printf("\n");
    pro=scanf("%d",&number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);//очистка буфера 
    if (pro!=1) //проверка ввода числа, а не символа
    {
        printf("inputed char,not  a nubmer, please input a number");
        printf("\nprint Enter for exit");
        getchar();
        return 1;
    }
    if (number<0) //проверка положительности числа
    {
    printf("incorrect input, number must be positive!");
    printf("\nprint Enter for exit");
    getchar();
    return 1;
    }
    int val = number;
    while (val > 0) 
    {
        if (val & 1) //если побитовом представлении встречается 1(логическое &1) 
        { 
            count++; //- записываем в счетчик +1
        }
        val >>= 1; // сдвигаемся на бит дальше
    }
    printf("number of '1'  bits :%d", count);
    printf("\nprint Enter for exit");
    getchar();
    return 0;
}
