#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b, c;
    printf("enter the number a ,b, c respectively\n");
    scanf("%d %d %d", &a, &b, &c);
    // conditional operator
     if( a==b && a==c){
         printf("all number are same.");
     }
     else{

          a > b ? (a > c ? printf("%d", a) : printf("%d", c)) : (b > c ? printf("%d", b) : printf("%d", c));
     }
   

    return 0;
}

