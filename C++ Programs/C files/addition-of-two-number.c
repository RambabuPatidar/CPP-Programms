#include<stdio.h>

int main()
{
    int a , b;
    printf(" enter the number a\n");
    scanf(" %d", &a);
    printf("Enter the second number b?\n");
    scanf(" %d", &b);

    int sum = a+b;
    printf(" the sum of the two number is %d\n", sum);

    return 0;

}