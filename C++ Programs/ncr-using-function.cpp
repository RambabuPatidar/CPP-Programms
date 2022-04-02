//go down to see the another short method
// #include<iostream>
// using namespace std;

// int factn(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial*=i;

//     }
//     return factorial;
// }

// int factdr(int r){
//     int factorialr=1;
//     for(int i=1;i<=r;i++){
//         factorialr*=i;
//     }
//     return factorialr;
// }
// int factdnr( int  a ){
//     int factorialnr=1;
//     for(int i=1;i<=a;i++){
//         factorialnr*=i;
//     }
//     return factorialnr;
// }

// int main(){

//     int n, r;
//     cin>>n>>r;
//     int a=n-r;

//     int numerator =factn( n);
//     int denomenator1= factdr ( r);
//     int denomenator2 = factdnr( a);

//     int ans = (numerator/((denomenator1)*(denomenator2)));
//     cout<<ans<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for( int i=1 ;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){

    int n, r;
    cin>>n>>r;

     int ans= (fact(n)/((fact(n-r)*fact(r))));
     cout<<ans<<endl;
    return 0;
}