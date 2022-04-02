#include<iostream>
using namespace std;

//you can also generalise this by putting values of order in matrix;

int main(){

    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int sum=0;
    cout<<" sum of the rows are as follows:\n";
    for( int i=0;i<4;i++){
        for( int j=0;j<4;j++){
            sum+= arr[i][j];
        }
        cout<<sum<<endl;
        sum=0;
    }
    cout<<" the sum of the following column are as follows:\n";
    for( int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
        sum=0;
    }
    
    return 0;
}