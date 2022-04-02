#include<iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;
    for( int i=1;i<=row;i++){
       
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for( int j =1;j<=col;j++){
            if( j==1||i==1||i==row||j==10){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
    }
    return 0;
}