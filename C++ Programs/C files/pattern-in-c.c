#include<stdio.h>

int main(){

    int n;
    printf("enter the value of n for row of triangle?");
    scanf("%d", &n);

    // 1st.


    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", '*');
        }
        printf("\n");
    }
    printf("\n");
    // 2nd

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("*   ");
        }
        printf("\n");
    }
  printf("\n");
    // 3rd

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d   ", j);
        }
        printf("\n");
    }

    return 0;
}