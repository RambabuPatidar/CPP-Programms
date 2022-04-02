#include<iostream>
using namespace std;

int main(){

    bool c1, c2, c3 ;
    c1= 1;
    c2 = 1;
    c3= 1;
    // if( c1){
    //     if(c2){
    //         cout<<0;
    //     }
    //     else{
    //         if(c3){
    //             cout<<0;
    //         }
    //         else{
    //             cout<<1;
    //         }
    //     }
    // }
    // else{
    //     if( c2){
    //         if(c3){
    //             cout<<0;
    //         }
    //         else{
    //             cout<<1;
    //         }
    //     }
    //     else{
    //         if( c3){
    //             cout<<1;
    //         }
    //         else{
    //             cout<<0;
    //         }
            
    //     }
    // }

    if( !(c1 or c2 or c3)){
        cout<<true<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}