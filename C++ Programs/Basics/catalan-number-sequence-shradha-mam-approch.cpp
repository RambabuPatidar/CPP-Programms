#include<iostream>
using namespace std;

// this methode are not optimized methods 
// for optimized method we have to study 
// dynamic programming and it is coming in 
// next some lessons / videos . Happy Coding Rambabu.
int catalanNum( int n ) {
    if(n <= 1 ) {
        return 1;
    }

    int result = 0;
    for( int i = 0; i < n; i++ ) {
        result+= catalanNum(i) * catalanNum(n-i-1);
    }
    return result;
}

int main() {

    int n;
    cin >> n;
    for(int i=0; i<n; i++ ) {
        cout << catalanNum( i) << " ";
    }

    return 0;
}