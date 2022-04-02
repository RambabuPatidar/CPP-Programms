#include <stdio.h>

int main()
{

    int number, digit, reverse = 0;
    printf(" Enter a number?");
    scanf(" %d", &number);
    int n;
    n = number;
    while (n != 0)
    {
        digit = n % 10;
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    number = reverse;
    while (number != 0)
    {
        digit = number % 10;
        switch (digit)
        {
        case 0:
            printf(" zero");
            break;
        case 1:
            printf(" one");
            break;
        case 3:
            printf(" three");
            break;
        case 4:
            printf(" four");
            break;
        case 5:
            printf(" five");
            break;
        case 6:
            printf(" six");
            break;
        case 7:
            printf(" seven");
            break;
        case 8:
            printf(" eight");
            break;
        case 9:
            printf(" nine");
            break;
        case 2:
            printf(" two");
            break;
        }
        number /= 10;
    }

    return 0;
}