#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int position = 1;
    int value = 0;
    // for loop
    for( int i =0;n>0;i++)
    {
        int rem = n % 2;
        value = (value) + (position * rem);
        position *= 10;
        n /= 2;
    }
    printf("%d", value);
    return 0;
}
