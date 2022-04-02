#include<stdio.h>

int main(){
    int t1,n , t2,sum=0;
    t1=0;
    t2=1;
    printf("enter N till which you want fibonacci series?");
    scanf("%d", &n);
    while(t2+t1<n){
        sum = t1+t2;
        printf("%d ", sum);
        t1 = t2;
        t2 = sum;
    }

    return 0;
}