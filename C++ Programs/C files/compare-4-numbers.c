#include<stdio.h>

int main (){

    int a, b, c , d;
    printf("enter the number a?  ");
    scanf("%d", &a); 
    printf("enter the number b?  ");
    scanf("%d", &b);
    printf("enter the number c?  ");
    scanf("%d", &c);
    printf("enter the number d?  ");
    scanf("%d", &d);

   int n=( a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d)));
   printf("the largest number from %d %d %d %d is : %d", a,b,c,d,n);
    return 0;
}