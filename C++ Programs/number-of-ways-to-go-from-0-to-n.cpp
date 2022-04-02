#include<iostream>
using namespace std;

int countways(int start ,int end){
    if( start== end){
        return 1;
    }
    if( start>end){
        return 0;
    }
    int counter = 0;
    for( int i=1;i<=6;i++){
        counter+=countways(start+i,end);
    }
    return counter;
}

int main(){

    cout<<countways(0,5);
    return 0;
}