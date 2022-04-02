#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b;
    char operator;
    printf("enter the values of the operands?\n");
    scanf("%d %d", &a, &b);
    fflush(stdin);
    printf("\n enter the operator \n ");
    scanf("%c", &operator);
    // switch
    switch (operator)
    {
    case '+':
        printf(" sum of the number is = %d", a + b);
        break;
    case '-':
        printf(" substraction of the number is = %d", a - b);
        break;
    case '*':
        printf(" multiplication of the number is = %d", a * b);
        break;
    case '/':
        printf(" division of the number is = %d", a / b);
        break;
    case '%':
        printf(" modulo of the number is = %d", a % b);
        break;

    default:
        printf("i am still learnig!");
        break;
    }

    return 0;
}