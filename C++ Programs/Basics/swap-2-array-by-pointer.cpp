#include<iostream>
using namespace std;

int main(){

    int a[]={4,5,8,5,6,1,6,8,52};

    int b[9]={6,89,8,5,4,3,52,8,7};
    
    int i=0;
    while(i<9){
        int *p= (a+i);
    int *q =(b+i);
    int temp= *p;
    *p=*q;
    *q=temp;
        i++;
    }
    for(int i=0;i<9;i++){
        cout<<a[i]<<"  "<<b[i]<<endl;
    }
    return 0;
}