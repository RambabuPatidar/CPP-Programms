#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("enter the number till you want the armstrong numner?\n");
    scanf("%d", &n);
    for( int i=1 ;i<=n;i++){
        int sum =0;
        int num = i;
        while(num>0){
            int lastdigit = num%10;
            sum += pow( lastdigit,3);
            num/=10;
        }
        if ( sum == i){
            printf("%d ", sum);
        }
      
    }
    return 0;
}