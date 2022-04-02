#include <stdio.h>
#include <conio.h>

int main()
{

    int n;

    printf("enter the number you want to check for even or odd?\n");
    scanf("%d", &n);
    //if else
    if (n % 2 == 0)
    {
        printf("the entered number is even");
    }
    else
    {
        printf("the entered number is odd.");
    }
    return 0;
}