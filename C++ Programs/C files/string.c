#include <stdio.h>

int lengthOfString(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        count++;
    }

    return count;
}
void addTwoString(char str1[], char str2[], int k)
{
    for (int i = lengthOfString(str1) + 1; i <= lengthOfString(str2) + lengthOfString(str1); i++)
    {
        str1[i] = str2[k];
        k++;
    }
    for (int i = 0; i < lengthOfString(str1) + lengthOfString(str2) + 1; i++)
    {
        printf("%c", str1[i]);
    }
}

void reverseTheString(char str[])
{
    for (int i = lengthOfString(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{

    char str1[20];
    char str2[20];
    printf("enter the string a\n");
    gets(str1);

    printf("enter the string 2\n");
    gets(str2);

    printf("%d\n", lengthOfString(str1));

    printf("%d\n", lengthOfString(str2));

    reverseTheString(str1);
    reverseTheString(str2);

    addTwoString(str1, str2, 0);

    return 0;
}