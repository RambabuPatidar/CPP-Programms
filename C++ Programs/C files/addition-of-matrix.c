#include<stdio.h>
#include<conio.h>

int main(){

  int n;
  printf("enter the value of n?");
  scanf("%d\n", &n );
  int arr1[n][n];
  for( int  i=0 ;i<n;i++){
    for( int  j=0 ; j< n;j++){
      scanf("%d", &arr1[i][j]);
    }
  }
  int arr2[n][n];
  for( int  i=0 ;i<n;i++){
    for( int  j=0 ; j< n;j++){
      scanf("%d" , &arr2[i][j]);
    }
  }
 int   arr3[n][n];
  for( int i=0 ;i<n;i++){
    for( int j=0;j<n;j++){
      arr3[i][j] = arr1[i][j] + arr2[i][j];
      printf("%d " , arr3[i][j]);
    }
    printf("\n");
  }



  return 0;
}