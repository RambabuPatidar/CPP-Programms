#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float c, float d){
    return c+d;
}



int main(){

    int a=12;
    int b= 11;
    float c =1.24;
    float d = 0.77;
    cout<<sum(a, b)<<endl;
    cout<<sum(c,d);
    return 0;
}