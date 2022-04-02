#include<stdio.h>

void swap(int * a , int* b){
    int c = *a;
    *a = *b;
    *b = c;

}
int main(){

    int a = 12;
    int b=15;

    swap(&a,&b);

    printf("a==%d\nb==%d", a, b);
    return 0;
}