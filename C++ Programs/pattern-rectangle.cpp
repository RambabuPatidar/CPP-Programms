#include<iostream>
using namespace std;

int main(){

    int col ,row;
    cout<<"enter the number of rows and column?";
    cin>>row>>col;
    for(int i=1 ; i<=col;i++){
        for(int j=1;j<=row;j++){
            cout<<"*";

        }
        cout<<endl;
        
    }
    return 0;
}