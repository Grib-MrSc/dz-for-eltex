#include <stdio.h>
int main()
{
    int number,pro,count=0;
    printf("input positive integer number");
    printf("\n");
    pro=scanf("%d",&number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    if (pro!=1){
        printf("inputed char,not  a nubmer, please input a number");
        printf("\nprint Enter for exit");
        getchar();
        return 1;
    }
    if (number<0) {
    printf("incorrect input, number must be positive!");
    printf("\nprint Enter for exit");
    getchar();
    return 1;
    }
    int val = number;
    while (val > 0) 
    {
        if (val & 1) { 
            count++;
        }
        val >>= 1; 
    }
    printf("number of '1'  bits :%d", count);
    printf("\nprint Enter for exit");
    getchar();
    return 0;
}