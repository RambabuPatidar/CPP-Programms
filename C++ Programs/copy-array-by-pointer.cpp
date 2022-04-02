#include<iostream>
using namespace std;

int main(){

    int a[]={4,5,8,5,6,1,6,8,52};

    int b[9]={};
    int *p;
    int i=0;
    while(i<9){
        p=&b[i];
        *p=a[i];
        i++;
    }
    for(int i=0;i<9;i++){
        cout<<a[i]<<"  "<<b[i]<<endl;
    }
    return 0;
}