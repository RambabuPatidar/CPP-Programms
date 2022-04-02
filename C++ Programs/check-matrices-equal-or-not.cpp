#include<iostream>
using namespace std;

int main(){

    int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int a2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int i,j;
    bool flag= true;
        for (  i=0;i<3;i++){
            for(  j=0;j<3;j++){
                if ( a1[i][j]==a2[i][j]){
                    
                } 
                else{
                    flag = false;
                    break;
                }
            }
        }
        if( flag){
            cout <<" equal";
        }
        else
        {cout<<"not equal";
        }
        
    return 0;
}