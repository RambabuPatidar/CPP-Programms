#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;

    }
    return factorial;
}

int main(){

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for( int j=0;j<=i;j++){
            int ans = fact(i)/((fact(i-j))*fact(j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// if failing to solve then care about the associativity in line no 20 
// so put don't forgot to put the braket in denomenator