#include<stdio.h>
int main(){

    int n;
    printf("enter the value of n?");
    scanf("%d", &n);

    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                continue;
            }
            if(i==n){
                break;
            }
            printf("( %d ,%d )\n", i ,j);
        }
    }
    return 0;
}