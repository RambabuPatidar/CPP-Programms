#include<iostream>
using namespace std;

int main(){

    int a[4][4]={{1,2,3,4},
                {5,6,7 ,8},
                {9,10,11,12},
                {13,14,15,16}};
    
    for( int i=0;i<4;i++){
        for( int j=i;j<4;j++){
            //here j =i is because we are only swapin the upper matrix who is oone side of diagonal
            //if we swap both side we will get our same matrix 
            //swap
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //print

    for( int i=0;i<4;i++){
        for( int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}