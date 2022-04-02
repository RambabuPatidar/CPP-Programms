#include<iostream>
using namespace std;

int main(){

    int a1[3][3]={{1,2,3},{4,5,6},{7,8,15}};
    int i,j, sum=0;
    for (  i=0;i<3;i++){
            for(  j=0;j<3;j++){
                if ( i==j){
                    sum+= a1[i][j];
                } 
            }
        }

        cout<<sum;
    return 0;
}