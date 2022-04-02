#include<stdio.h>

int main(){

    int n,tempN,num,sum=0;
    printf("enter the value of N?\n");
    scanf("%d", &n);
    tempN =n;

    // FOR loop
    
     printf("enter the n numbers?\n");
    for(int i=1;i<=n;i++){
        
        scanf("%d", &num);
        sum+= num;

    }
    printf("the sum by FOR LOOP is : %d", sum);



    // WHILE loop

    sum = 0;
    printf("\nenter n values?\n");
    
    while( n>=1){
        scanf("%d", &num);
        sum += num;
        n--;
    }
    printf("the sum by WHILE LOOP is: %d", sum);


    // DO WHILE
    
    n = tempN;
    sum =0;
    printf("\nenter n values?\n");

    do
    {
        scanf("%d", &num);
        sum += num;
        n--;
    } while (n>=1);

    printf("the sum BY DO WHILE LOOP is: %d", sum);
    
    return 0;
}