#include<iostream>
using namespace std;
//as the pointer can change the value through thier address so we can 
// take advantage of it
void greatSmall(int a , int b, int*great , int *small){
    
    if(a>b){
        *great = a;
        *small = b;

    }
    else{
        *great = b;
        *small = a;

    }

}

int main(){

    int great , small , a, b;
    a= 2;
    b=8;
    greatSmall(a,b,&great,&small);
    cout<<"the greater value is: "<<great<<endl;
    cout<<"the smaller value is: "<<small<<endl;
    return 0;
}

