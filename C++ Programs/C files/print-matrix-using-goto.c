#include<stdio.h>

int main(){

    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    printf("the sum of matrix is : \n");
    
    int i =0;
    int j =0;
    printrow:
       j=0;
        printcol:
               if(j<3){
                   printf("%d ", arr[i][j]);
                   j++;
                   goto printcol;
               }
               if(i<3-1){
                   printf("\n");
                   i++;
                   goto printrow;
               }
    return 0;
}